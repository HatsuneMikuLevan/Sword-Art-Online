#include <iostream>

void solve_4_24(int n) {
    std::cout << "а) " << (n % 2 == 0 ? "Да" : "Нет") << std::endl;
    std::cout << "б) " << (n % 10 == 7 ? "Да" : "Нет") << std::endl;
}

int main() {
    int n;
    std::cout << "Введите натуральное число: ";
    std::cin >> n;
    solve_4_24(n);
    return 0;
}
