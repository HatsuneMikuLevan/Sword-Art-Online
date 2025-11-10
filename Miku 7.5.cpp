

#include <iostream>

int main() {
    int n;
    std::cout << "Введите количество сотрудников: ";
    std::cin >> n;
    double total_salary = 0.0;
    for (int i = 0; i < n; ++i) {
        double salary;
        std::cout << "Введите зарплату сотрудника " << i + 1 << ": ";
        std::cin >> salary;
        total_salary += salary;
    }
    std::cout << "Общая сумма выплаченных денег: " << total_salary << std::endl;
    return 0;
}
