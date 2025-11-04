#include <iostream>

int main() {
    int sum = 0;
    for (int i = 31; i < 100; ++i) {
        if (i % 3 == 0) {
            int last_digit = i % 10;
            if (last_digit == 2  last_digit == 4  last_digit == 8) {
                sum += i;
            }
        }
    }
    std::cout << "Сумма чисел, больших 30 и меньших 100, кратных трем и оканчивающихся на 2, 4 и 8: " << sum << std::endl;
    return 0;
}
