

#include <iostream>

int main() {
    int n, m, sum = 0;
    std::cout << "Введите натуральное число: ";
    std::cin >> n;
    std::cout << "Введите количество последних цифр m: ";
    std::cin >> m;
    for (int i = 0; i < m && n > 0; ++i) {
        sum += n % 10;
        n /= 10;
    }
    std::cout << "Сумма последних " << m << " цифр: " << sum << std::endl;
    return 0;
}
