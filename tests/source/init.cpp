
#include <Sem2_Lab8.hpp>
#include <catch.hpp>

SCENARIO ("Constructor"){
	Complex<double> num1(1, 5);
  REQUIRE ((num1.give_x() == 1) && (num1.give_y() == 5));
}
SCENARIO ("Addition(number)"){
	Complex<double> num1(1, 5);
  int i = 3;
  num1 += i;
  REQUIRE ((num1.give_x() == 4) && (num1.give_y() == 5));
}
SCENARIO ("Addition(Complex)"){
	Complex<double> num1(1, 5);
  Complex<double> num2(4, 6);
  num1 = num1 + num2;
  REQUIRE ((num1.give_x() == 5) && (num1.give_y() == 11));
}
SCENARIO ("Substraction(number)"){
	Complex<double> num1(1, 5);
  int i = 3;
  num1 -= i;
  REQUIRE ((num1.give_x() == -2) && (num1.give_y() == 5));
}
SCENARIO ("Substraction(Complex)"){
	Complex<double> num1(1, 5);
  Complex<double> num2(4, 6);
  num1 = num1 - num2;
  REQUIRE ((num1.give_x() == -3) && (num1.give_y() == -1));
}
SCENARIO ("Multiplication(number)"){
	Complex<double> num1(1, 5);
  int i = 3;
  num1 *= i;
  REQUIRE ((num1.give_x() == 3) && (num1.give_y() == 15));
}
SCENARIO ("Multiplication(Complex)"){
	Complex<double> num1(1, 5);
  Complex<double> num2(4, 6);
  num1 = num1 * num2;
  REQUIRE ((num1.give_x() == -26) && (num1.give_y() == 26));
}
SCENARIO ("Division(number)"){
	Complex<double> num1(1, 5);
  int i = 4;
  num1 /= i;
  REQUIRE ((num1.give_x() == 0.25) && (num1.give_y() == 1.25));
}
SCENARIO ("MakeEqualTo(Complex)"){
	Complex<double> num1(1, 5);
  Complex<double> num2(2, 3);
  num1 = num2;
  REQUIRE ((num1.give_x() == 2) && (num1.give_y() == 3));
}
SCENARIO ("EqualsTo?(Complex)(ShouldWork)"){
	Complex<double> num1(1, 5);
  Complex<double> num2(1, 5);
  REQUIRE (num1 == num2);
}
SCENARIO ("EqualsTo?(Complex)(Shouldn'tWork)"){
	Complex<double> num1(1, 5);
  Complex<double> num2(2, 4);
  REQUIRE (!(num1 == num2));
}
