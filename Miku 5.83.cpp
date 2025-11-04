

#include <iostream>

int main() {
    int sum = 0;
    for (int i = 1; i < 50; i += 2) {
        sum += i;
    }
    std::cout << "Сумма положительных нечетных чисел, меньших 50: " << sum << std::endl;
    return 0;
}
