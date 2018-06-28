#include "arithmetic.h"

Number::Number(const double number) : number(number) {}

const Number Number::operator+(const Number &other) const
{
  return number + other.number;
}

const Number Number::operator-(const Number &other) const
{
  return number - other.number;
}

const Number Number::operator*(const Number &other) const
{
  return number * other.number;
}

const Number Number::operator/(const Number &other) const
{
  return number / other.number;
}

std::ostream &operator<<(std::ostream &os, const Number &wrapper)
{
  return os << '[' << wrapper.number << ']';
}
