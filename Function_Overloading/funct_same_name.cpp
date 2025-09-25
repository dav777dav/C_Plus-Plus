#include <iostream>

int fun(int a, int b) {
    return a + b; 
}
double fun(double a, double b, double c) {
    return a * b / c;
}

int main() {
    int a = 0;
    int b = 0;
    int c = 0;

    std::cout << "Enter the first number: ";
    std::cin >> a;
    std::cout << "Enter the second number: ";
    std::cin >> b;
    std::cout << "Enter the third number: ";
    std::cin >> c;
    
    std::cout << fun(a, b) << std::endl;
    std::cout << fun(a, b, c) << std::endl;
    return 0;
}
