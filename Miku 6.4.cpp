
#include <iostream>

void solve_6_4() {
    int num = 191;
    while (true) {
        if (num % 17 == 0) {
            std::cout << "Минимальное число, большее 190, которое нацело делится на 17: " << num << std::endl;
            break;
        }
        num++;
    }
}
