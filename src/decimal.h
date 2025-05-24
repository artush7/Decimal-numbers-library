
template<typename T>
class decimal
{
public:
    virtual T get_value() const = 0;
    virtual void add(const decimal<T>& other) = 0;
    virtual void subtract(const decimal<T>& other) = 0;
    virtual void multiply(const decimal<T>& other) = 0;
    virtual void divide(const decimal<T>& other) = 0;
    virtual ~decimal () {}

};