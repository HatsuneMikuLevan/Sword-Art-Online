

#include <iostream>
#include <string>
#include <vector>

std::string getDayOfWeek(int dayNumber) {
    std::vector<std::string> days = {"понедельник", "вторник", "среда", "четверг", "пятница", "суббота", "воскресенье"};
    return days[dayNumber - 1];
}

int main() {
    int k;
    std::cout << "Введите номер дня в году (1 <= k <= 365): ";
    std::cin >> k;

    // a) 1 января - понедельник (1-й день недели)
    int dayOfWeek_a = (k - 1) % 7 + 1;
    std::cout << "а) Если 1 января - понедельник, то " << k << "-й день - " << getDayOfWeek(dayOfWeek_a) << std::endl;

    // б) 1 января - d-й день недели
    int d;
    std::cout << "Введите номер дня недели для 1 января (1-7): ";
    std::cin >> d;
    int dayOfWeek_b = (d + k - 2) % 7 + 1;
    std::cout << "б) Если 1 января - " << getDayOfWeek(d) << ", то " << k << "-й день - " << getDayOfWeek(dayOfWeek_b) << std::endl;

    return 0;
}
