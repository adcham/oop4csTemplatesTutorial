#pragma once
#include <iostream>

class Fraction
{
public:
	Fraction(int num, int denum);
	~Fraction();

	void displayFraction();
	bool operator>(const Fraction& rhs);

private:
	int num, denum;
};

inline Fraction::Fraction(int num, int denum) :  num(num), denum(denum) {

}
inline Fraction::~Fraction() {

}
inline void Fraction::displayFraction() {
	std::cout << num << "/" << denum;
}

inline bool Fraction::operator>(const Fraction& rhs)
{
	int lhsNum = num * rhs.denum;
	int rhsNum = rhs.num * denum;

	return (lhsNum > rhsNum);
}
