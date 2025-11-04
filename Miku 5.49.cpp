

#include <iostream>
#include <vector>
#include <iomanip>

int main() {
    double initial_deposit = 1000.0;
    double rate = 0.02;

    std::cout << std::fixed << std::setprecision(2);

    // а) Прирост суммы вклада
    double current_deposit = initial_deposit;
    std::cout << "Прирост суммы вклада:" << std::endl;
    for (int month = 1; month <= 10; ++month) {
        double growth = current_deposit * rate;
        current_deposit += growth;
        std::cout << "Месяц " << month << ": " << growth << " руб." << std::endl;
    }

    // б) Сумма вклада
    current_deposit = initial_deposit;
    std::cout << "\nСумма вклада:" << std::endl;
    for (int month = 1; month <= 12; ++month) {
        current_deposit *= (1 + rate);
        if (month >= 3) {
            std::cout << "Через " << month << " месяца(ев): " << current_deposit << " руб." << std::endl;
        }
    }

    return 0;
}
