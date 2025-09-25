#include <iostream>

int fun(int &a) {
    return a + a;
}
int fun(const int &b) {
    return b * b;
}

int main() {
    int x = 0;
    int y = 0;

    std::cout << "Enter the first, and the second numbers: ";
    std::cin >> x;
    std::cin >> y;

    std::cout << fun(x) << std::endl;
    std::cout << fun(y) << std::endl;

    return 0;
}
