

#include <iostream>

void solve_6_9() {
    int num;
    do {
        std::cout << "Введите четное число: ";
        std::cin >> num;
        if (num % 2 != 0) {
            std::cout << "Ошибка: введено нечетное число. Повторите ввод." << std::endl;
        }
    } while (num % 2 != 0);
    std::cout << "Вы ввели четное число: " << num << std::endl;
}
