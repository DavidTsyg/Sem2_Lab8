#include <iostream>

using namespace std;

template <class T>
class Complex {
	double x;
	double y;
public:
	T give_x() const 
	{
		return x;
	}
	T give_y() const 
	{
		return y;
	}
	Complex()
	{
		x = 0;
		y = 0;
	}
	Complex(T first, T second)
	{
		x = first;
		y = second;
	}
	Complex sum(T number)
	{
		Complex buf(x + number, y);
		return buf;
	}

	Complex sum(const Complex& number)
	{
		Complex buf(x + number.give_x(), y + number.give_y());
		return buf;
	}

	Complex sub(const Complex& number)
	{
		Complex buf(x - number.give_x(), y - number.give_y());
		return buf;
	}
	Complex sub(T number)
	{
		Complex buf(x - number, y);
		return buf;
	}

	Complex mul(int number)
	{
		Complex buf(x *number, y * number);
		return buf;
	}

	Complex div(int number)
	{
		if (number) {
			Complex buf(T(x /number), T(y /number));
			return buf;
		}
		else
		{
			Complex buf;
			cout << "You can't divide by zero !" << endl;
			return buf;
		}
	}

	Complex mul_complex(const Complex& number)
	{
		Complex buf(x*number.give_x() - y*number.give_y(), x*number.give_y() + y*number.give_x());
		return buf;
	}
	void print()
	{
		if (x && y)
			cout << x << " + " << y << 'i' << endl;
		else if (x && !y)
			cout << x << endl;
		else if (!x && y)
			cout << y << 'i' << endl;
		else
			cout << 0 << endl;
	}
	Complex operator+(const Complex& m2)
	{
		return sum(m2);
	}
	Complex operator+(T num)
	{
		return sum(num);
	}
	Complex operator-(const Complex& m2)
	{
		return sub(m2);
	}
	Complex operator-(T num)
	{
		return sub(num);
	}
	Complex operator*(const Complex& m2)
	{
		return mul_complex(m2);
	}
	Complex operator*(T num)
	{
		return mul(num);
	}
	Complex operator/(T num)
	{
		return div(num);
	}
	Complex operator=(const Complex& m2)
	{
		x = m2.give_x();
		y = m2.give_y();
		return *this;
	}
	Complex operator+=(const Complex& m2)
	{
		*this = *this + m2;
		return *this;
	}
	Complex operator+=(T num)
	{
		*this = *this + num;
		return *this;
	}
	Complex operator-=(const Complex& m2)
	{
		*this = *this - m2;
		return *this;
	}
	Complex operator-=(T num)
	{
		*this = *this - num;
		return *this;
	}
	Complex operator*=(const Complex& m2)
	{
		*this = *this * m2;
		return *this;
	}
	Complex operator*=(T num)
	{
		*this = *this * num;
		return *this;
	}
	Complex operator/=(T num)
	{
		*this = *this / num;
		return *this;
	}
	bool operator==(const Complex& m2)
	{
		if ((x == m2.give_x()) && (y == m2.give_y()))
			return 1;
		else
			return 0;
	}
	template <typename U>
	friend ostream& operator<<(ostream&, const Complex<U>&);
	template <typename U>
	friend std::istream& operator >> (istream&, Complex<U>&);
};

template <class T>
ostream& operator<<(ostream& os, const Complex<T>& num)
{
	if (num.give_x() && num.give_y())
		os << num.give_x() << " + " << num.give_y() << 'i' << endl;
	else if (num.give_x() && !num.give_y())
		os << num.give_x() << endl;
	else if (!num.give_x() && num.give_y())
		os << num.give_y() << 'i' << endl;
	else
		os << 0 << endl;
	return os;
}
template <class T>
istream& operator >> (istream &in, Complex<T>& number)
{
	T x;
	T y;
	in >> x;
	in >> y;
	Complex<T> buf(x, y);
	number = buf;
	return in;
}
