

#include <iostream>

int main() {
    int n, a;
    std::cout << "Введите количество квартир n: ";
    std::cin >> n;
    std::cout << "Введите номер первой квартиры a: ";
    std::cin >> a;

    bool is_sum_even;
    int n_mod_4 = n % 4;

    if (n_mod_4 == 0 || n_mod_4 == 3) {
        is_sum_even = true;
    } else if (n_mod_4 == 1 || n_mod_4 == 2) {
        if (a % 2 == 0) {
            is_sum_even = true;
        } else {
            is_sum_even = false;
        }
    }

    if (is_sum_even) {
        std::cout << "Сумма номеров всех квартир является четным числом." << std::endl;
    } else {
        std::cout << "Сумма номеров всех квартир является нечетным числом." << std::endl;
    }

    return 0;
}
