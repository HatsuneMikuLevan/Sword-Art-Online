#include <iostream>

void solve_4_26(int n) {
    int d1 = n / 10;
    int d2 = n % 10;
    std::cout << "а) ";
    if (d1 > d2) {
        std::cout << "Первая цифра больше" << std::endl;
    } else if (d2 > d1) {
        std::cout << "Вторая цифра больше" << std::endl;
    } else {
        std::cout << "Цифры равны" << std::endl;
    }
    std::cout << "б) " << (d1 == d2 ? "Да" : "Нет") << std::endl;
}

int main() {
    int n;
    std::cout << "Введите двузначное число: ";
    std::cin >> n;
    solve_4_26(n);
    return 0;
}
