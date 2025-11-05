

#include <iostream>

void solve_6_10() {
    const int correct_password = 12345;
    int password;
    do {
        std::cout << "Введите пароль: ";
        std::cin >> password;
        if (password != correct_password) {
            std::cout << "Ошибка: введен неверный пароль. Повторите ввод." << std::endl;
        }
    } while (password != correct_password);
    std::cout << "Приветствие! Пароль верный." << std::endl;
}
