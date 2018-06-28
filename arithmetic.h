#include <ostream>

class Number
{
	friend std::ostream &operator<<(std::ostream &, const Number &);
public:
	Number(const double number);

	const Number operator+(const Number &other) const;
	const Number operator-(const Number &other) const;
	const Number operator*(const Number &other) const;
	const Number operator/(const Number &other) const;

private:
	const double number;
};
