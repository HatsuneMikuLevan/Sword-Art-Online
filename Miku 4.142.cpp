

#include <iostream>
#include <string>
#include <vector>

std::string getMonthName(int m) {
    std::vector<std::string> months = {"январь", "февраль", "март", "апрель", "май", "июнь", "июль", "август", "сентябрь", "октябрь", "ноябрь", "декабрь"};
    if (m >= 1 && m <= 12) {
        return months[m - 1];
    } else {
        return "Неизвестный месяц";
    }
}

int main() {
    int m, d;
    std::cout << "Введите количество прошедших месяцев: ";
    std::cin >> m;
    std::cout << "Введите количество прошедших дней: ";
    std::cin >> d;
    std::cout << "Название месяца: " << getMonthName(m) << std::endl;
    return 0;
}
