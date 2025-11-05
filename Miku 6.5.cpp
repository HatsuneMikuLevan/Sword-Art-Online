

#include <iostream>

void solve_6_5() {
    int num = 5000;
    while (num > 0) {
        if (num % 139 == 0) {
            std::cout << "Максимальное число, не превышающее 5000, которое нацело делится на 139: " << num << std::endl;
            break;
        }
        num--;
    }
}
