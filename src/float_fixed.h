#include "decimal.h"

template<typename T>
class floating : public decimal<T>
{
protected:
    T value_;
public:
    floating(T value)
    {
        value_ = value;
    }

    void add(const decimal<T>& other) override
    {
        value_ = value_ + other.get_value();
    }

    void subtract(const decimal<T>& other) override 
    {
        value_ = value_ - other.get_value();
    }

    void multiply(const decimal<T>& other) override {
        value_ = value_ * other.get_value();
    }

    void divide(const decimal<T>& other) override {
        T divisor = other.get_value();
        if (divisor != 0) 
        {
            value_ = value_ / divisor;
        }
    }

    T get_value() const override
    {
        return value_;
    }
};