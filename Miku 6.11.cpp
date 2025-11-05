

#include <iostream>

void solve_6_11() {
    int num;
    for (int i = 0; i < 10; ++i) {
        std::cout << "Введите число (для завершения введите 0): ";
        std::cin >> num;
        if (num == 0) {
            break;
        }
    }
}
