
#include <iostream>

int main() {
    int n;
    std::cout << "Введите стоимость в копейках (1 < n < 9999): ";
    std::cin >> n;

    if (n <= 1 || n >= 9999) {
        std::cout << "Некорректная стоимость." << std::endl;
        return 1;
    }

    int rub = n / 100;
    int kop = n % 100;

    std::cout << rub << " ";
    int last_digit_rub = rub % 10;
    int last_two_digits_rub = rub % 100;
    if (last_two_digits_rub >= 11 && last_two_digits_rub <= 14) {
        std::cout << "рублей";
    } else if (last_digit_rub == 1) {
        std::cout << "рубль";
    } else if (last_digit_rub >= 2 && last_digit_rub <= 4) {
        std::cout << "рубля";
    } else {
        std::cout << "рублей";
    }

    std::cout << " " << kop << " ";
    int last_digit_kop = kop % 10;
    int last_two_digits_kop = kop % 100;
    if (last_two_digits_kop >= 11 && last_two_digits_kop <= 14) {
        std::cout << "копеек" << std::endl;
    } else if (last_digit_kop == 1) {
        std::cout << "копейка" << std::endl;
    } else if (last_digit_kop >= 2 && last_digit_kop <= 4) {
        std::cout << "копейки" << std::endl;
    } else {
        std::cout << "копеек" << std::endl;
    }

    return 0;
}
