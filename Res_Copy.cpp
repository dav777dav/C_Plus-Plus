#include <iostream>

int main() {
	int x;
	std::cout << "Enter x number: ";
	std::cin >> x;
	
	int y = x;
	int &r = x;

	y = 50;
	r = 30;

	std::cout << "x = " << x << std::endl;
	std::cout << "y = " << y << std::endl;
	std::cout << "r = " << r << std::endl;
	
	return 0;
}
