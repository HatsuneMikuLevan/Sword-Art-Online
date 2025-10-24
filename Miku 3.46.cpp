#include <iostream>
#include <string>
#include <vector>

int main() {
    int k;
    std::cout << "Введите целое число k (1 <= k <= 150): ";
    std::cin >> k;

    if (k < 1 || k > 150) {
        std::cout << "Некорректное значение k. Введите число от 1 до 150." << std::endl;
        return 1;
    }


    int number_index = (k - 1) / 3;
    int number = 101 + number_index;

  
    int digit_position = (k - 1) % 3;
    int digit;

    if (digit_position == 0) {
        
        digit = number / 100;
    } else if (digit_position == 1) {
        
        digit = (number / 10) % 10;
    } else {
        
        digit = number % 10;
    }

    std::cout << "k-я цифра в последовательности: " << digit << std::endl;

    return 0;
}
