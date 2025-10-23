#include <iostream>

int main() {
    int n;
    std::cout << "Введите трехзначное число n (10 <= n <= 999): ";
    std::cin >> n;

    int b = n / 100;

    
    int ac_part = n % 100;

    
    int x = ac_part * 10 + b;

    std::cout << "Исходное трехзначное число x: " << x << std::endl;

    return 0;
}
