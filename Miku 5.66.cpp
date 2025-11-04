
#include <iostream>

int main() {
    int total_sum = 0;
    for (int n = 1; n <= 12; ++n) {
        int square_n = 0;
        int odd_number = 1;
        for (int i = 0; i < n; ++i) {
            square_n += odd_number;
            odd_number += 2;
        }
        total_sum += square_n;
    }
    std::cout << "Сумма квадратов от 1 до 12 равна: " << total_sum << std::endl;
    return 0;
}
