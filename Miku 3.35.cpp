#include <iostream>

int main() {
    int n;
    std::cout << "Введите число n (1 <= n <= 999): ";
    std::cin >> n;

    int x = 0;
    for (int a = 1; a <= 9; ++a) {
        if ((n - a) % 10 == 0) {
            x = (99 * a + n) / 10;
            
            if (x >= 100 && x <= 999) {
                
                int first_digit_of_x = x / 100;
                if (first_digit_of_x == a) {
                    std::cout << "Искомое число x: " << x << std::endl;
                    return 0;
                }
            }
        }
    }

    std::cout << "Решение не найдено." << std::endl;
    return 0;
