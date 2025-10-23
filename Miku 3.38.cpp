#include <iostream>

int main() {
    int result = 456;
    int b = result % 10;
    int new_number = result / 10;
    int a = new_number / 10;
    int c = new_number % 10;
    int x = a * 100 + b * 10 + c;
    std::cout << "Исходное число x: " << x << std::endl;
    return 0;
}
