
#define float illegal
#define double illegal


class Decimal
{
public:
    Decimal();
    virtual Decimal operator +(Decimal& other) = 0;
    virtual bool operator ==(const Decimal& other) const = 0;
    ~Decimal();
};

template <int bits>
concept Size_Float = (bits == 16) || (bits == 32) || (bits == 64);

template<int integer,int decimal>
concept Size_Fixed = (integer + decimal == 16) || (integer + decimal == 32) || (integer + decimal == 64);

template <int bits>
class Float : public Decimal
{
public:
    Float(int n,int d);

    Decimal operator +(Decimal& other) override;
    bool operator ==(const Decimal& other) const override;
};

template<int integer,int decimal>
class Fixed : public Decimal
{
public:
    Fixed(int n,int d);

    Decimal operator +(Decimal& other) override;
    bool operator ==(const Decimal& other) const override;
};

template <int bits>
Float<bits>::Float(int n,int d)
{

}
