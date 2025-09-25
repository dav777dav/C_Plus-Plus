#include <iostream>

int fun(int a) {
    return a;
}
double fun(const double b) {
    return b;
}
float fun(const float &c) {
    return c;
}

int main() {
    int x = 0;
    double y = 0;
    float z = 0;

    std::cout << "Enter the first, the second, and the third numbers: ";
    std::cin >> x >> y >> z;

    std::cout << fun(x) << "\n" << fun(y) << "\n" << fun(z) << std::endl;
    return 0;
}
