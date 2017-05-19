
#include <Sem2_Lab8.hpp>
#include <catch.hpp>

SCENARIO ("Constructor"){
	Complex<double> num1(1, 5);
	bool rv; 
	if((num1.give_x() == 1) && (num1.give_y() == 5))
		rv = 1;
	else 
		rv = 0;
  	REQUIRE (rv == 1);
}
SCENARIO ("Addition(number)"){
	Complex<double> num1(1, 5);
  	int i = 3;
  	num1 += i;
	bool rv;
  	if((num1.give_x() == 4) && (num1.give_y() == 5))
		rv = 1;
	else 
		rv = 0;
  	REQUIRE (rv == 1);
}
SCENARIO ("Addition(Complex)"){
	Complex<double> num1(1, 5);
 	Complex<double> num2(4, 6);
  	num1 = num1 + num2;
	bool rv;
	if((num1.give_x() == 5) && (num1.give_y() == 11))
		rv = 1;
	else 
		rv = 0;
  	REQUIRE (rv == 1);
}
SCENARIO ("Substraction(number)"){
	Complex<double> num1(1, 5);
  	int i = 3;
  	num1 -= i;
  	bool rv;
	if((num1.give_x() == -2) && (num1.give_y() == 5))
		rv = 1;
	else 
		rv = 0;
  	REQUIRE (rv == 1);
}
SCENARIO ("Substraction(Complex)"){
	Complex<double> num1(1, 5);
  	Complex<double> num2(4, 6);
  	num1 = num1 - num2;
  	bool rv;
	if((num1.give_x() == -3) && (num1.give_y() == -1))
		rv = 1;
	else 
		rv = 0;
  	REQUIRE (rv == 1);
}
SCENARIO ("Multiplication(number)"){
	Complex<double> num1(1, 5);
  	int i = 3;
  	num1 *= i;
  	bool rv;
	if((num1.give_x() == 3) && (num1.give_y() == 15))
		rv = 1;
	else 
		rv = 0;
  	REQUIRE (rv == 1);
}
SCENARIO ("Multiplication(Complex)"){
	Complex<double> num1(1, 5);
  	Complex<double> num2(4, 6);
  	num1 = num1 * num2;
  	bool rv;
	if((num1.give_x() == -26) && (num1.give_y() == 26))
		rv = 1;
	else 
		rv = 0;
  	REQUIRE (rv == 1);
}
SCENARIO ("Division(number)"){
	Complex<double> num1(1, 5);
  	int i = 4;
  	num1 /= i;
  	bool rv;
	if((num1.give_x() == 0.25) && (num1.give_y() == 1.25))
		rv = 1;
	else 
		rv = 0;
  	REQUIRE (rv == 1);
}
SCENARIO ("MakeEqualTo(Complex)"){
	Complex<double> num1(1, 5);
  	Complex<double> num2(2, 3);
  	num1 = num2;
  	bool rv;
	if((num1.give_x() == 2) && (num1.give_y() == 3))
		rv = 1;
	else 
		rv = 0;
  	REQUIRE (rv == 1);
}
SCENARIO ("EqualsTo?(Complex)(ShouldWork)"){
	Complex<double> num1(1, 5);
  	Complex<double> num2(1, 5);
	bool rv;
	if(num1 == num2)
		rv = 1;
	else 
		rv = 0;
  	REQUIRE (rv == 1);
}
SCENARIO ("EqualsTo?(Complex)(Shouldn'tWork)"){
	Complex<double> num1(1, 5);
  	Complex<double> num2(2, 4);
  	bool rv;
	if(!(num1 == num2))
		rv = 1;
	else 
		rv = 0;
  	REQUIRE (rv == 1);
}
