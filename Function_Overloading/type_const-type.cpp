#include <iostream>

int fun(int a, int b) {
    return a + b;
}
double fun(const double a, const int b, const double c) {
    return a + b * c / a - c;
}

int main() {
    int a = 0;
    int b = 0;
    int c = 0;

    std::cout << "Enter the first, the second, and the third numbers: ";
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    std::cout << fun(a, b) << " " << fun(a, b, c) << std::endl;

    return 0;
}
