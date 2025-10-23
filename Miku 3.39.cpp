#include <iostream>

int main() {
    int n;
    std::cout << "Введите трехзначное число n (100 <= n <= 999): ";
    std::cin >> n;

    int a = n / 100;
    int b = n % 10;
    int c = (n % 100) / 10;

    int x = a * 100 + b * 10 + c;

    std::cout << "Исходное число x: " << x << std::endl;

    return 0;
}
