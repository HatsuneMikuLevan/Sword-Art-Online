4.85

#include <iostream>

void solve_4_85() {
    int n;
    std::cout << "Введите возраст в месяцах (1 <= n <= 1188): ";
    std::cin >> n;

    if (n >= 1 && n <= 1188) {
        int years = n / 12;
        int months = n % 12;
        std::cout << "Возраст: " << years << " лет " << months << " месяцев" << std::endl;
    } else {
        std::cout << "Некорректный ввод." << std::endl;
    }
}
