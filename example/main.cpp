#include <iostream>
#include <stdlib.h>

#include "Sem2_Lab8.hpp"
using namespace std;

int main()
{
	Complex<double> num1(1, 5);
	Complex<double> num2(3, 4);
	cout << num1 * num2;
	return 0;
}
