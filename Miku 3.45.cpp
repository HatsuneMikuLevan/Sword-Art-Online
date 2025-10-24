#include <iostream>

int main() {
    int k;
    std::cout << "Введите целое число k (1 <= k <= 180): ";
    std::cin >> k;

   
    if (k < 1 || k > 180) {
        std::cout << "Число k должно быть в диапазоне от 1 до 180." << std::endl;
        return 1;
    }

    // а) Номер пары цифр
    int pair_number;
    if (k % 2 == 0) {
        pair_number = k / 2;
    } else {
        pair_number = (k + 1) / 2;
    }
    std::cout << "а) Номер пары цифр, в которую входит k-я цифра: " << pair_number << std::endl;

    // б) Двузначное число
    int two_digit_number = 9 + pair_number;
    std::cout << "б) Двузначное число, образованное парой цифр: " << two_digit_number << std::endl;

    // в) k-я цифра
    int digit;
    if (k % 2 != 0) { 
        digit = two_digit_number / 10;
        std::cout << "в) k-я цифра (k - нечетное число): " << digit << std::endl;
    } else {
        digit = two_digit_number % 10;
        std::cout << "в) k-я цифра (k - четное число): " << digit << std::endl;
    }

    return 0;
}
