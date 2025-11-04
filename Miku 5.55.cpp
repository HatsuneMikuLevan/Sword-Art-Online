

#include <iostream>

int main() {
    int sum = 0;
    for (int i = 1; i <= 10; i += 2) {
        sum += (i + 1) * (i + 1) - i * i;
    }
    std::cout << "Сумма равна: " << sum << std::endl;
    return 0;
}
