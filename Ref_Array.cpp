#include <iostream>

int main() {
	int arr[3] = {1, 2, 3};
	int &r = arr[0];
	r = 5;

	for (int i = 0; i < 3; ++i) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

	return 0;
}
