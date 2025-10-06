#include <iostream>

int main() {
    int result = 237;
    int c = result / 100;
    int ab = result % 100;
    int a = ab / 10;
    int b = ab % 10;

    int x = a * 100 + b * 10 + c;

    std::cout << "Исходное число x: " << x << std::endl;
    return 0;
}
