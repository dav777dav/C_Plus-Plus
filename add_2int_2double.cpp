#include <iostream>

int addInt(int a, int b) {
	return a + b;
}

double addDouble(double a, double b) {
	return a + b;
}

int main() {
	int a = 0;
	int b = 0;
	double da = 0;
	double db = 0;

	std::cout << "Enter the first integer number: ";
	std::cin >> a;
	std::cout << "Enter the second integer number: ";
	std::cin >> b;

	std::cout << "Enter the first double number: ";
	std::cin >> da;
	std::cout << "Enter the second double number: ";
 	std::cin >> db;

	int sumInt = addInt(a, b);
	double sumDouble = addDouble(da, db);

	std::cout << "The sum of integer numbers is " << sumInt << std::endl;
	std::cout << "The sum of double numbers is " << sumDouble << std::endl;

	return 0;
}
