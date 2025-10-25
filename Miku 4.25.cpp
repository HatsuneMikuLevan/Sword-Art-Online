#include <iostream>

void solve_4_25(int n) {
    int next_even = (n % 2 == 0) ? n + 2 : n + 1;
    std::cout << "Следующее четное число: " << next_even << std::endl;
}

int main() {
    int n;
    std::cout << "Введите целое число: ";
    std::cin >> n;
    solve_4_25(n);
    return 0;
}
