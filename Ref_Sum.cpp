#include <iostream>

void sum(int &a, int &b, int &res) {
	res = a + b;
}

int main() {
	int a = 0;
	int b = 0;
	int res = 0;
	std::cout << "Enter the first number: ";
	std::cin >> a;
	std::cout << "Enter the second number: ";
	std::cin >> b;
	
	sum(a, b, res);

	std::cout << "The sum of numbers is " << res << std::endl;

	return 0;
}
