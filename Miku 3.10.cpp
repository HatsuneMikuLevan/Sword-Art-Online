#include <iostream>

int main() {
    int k; 
    std::cout << "Введите номер дня года (1-365): ";
    std::cin >> k;

    int day_a = ((k - 1) % 7) + 1;
    std::cout << "Если 1 января - понедельник, то k-й день - это: " << day_a << std::endl;

    int day_b = ((k - 1) + 1) % 7 + 1;
    std::cout << "Если 1 января - вторник, то k-й день - это: " << day_b << std::endl;

    int d; 
    std::cout << "Введите номер дня недели для 1 января (1-7): ";
    std::cin >> d;
    int day_c = ((k - 1) + (d - 1)) % 7 + 1;
    std::cout << "Если 1 января - " << d << "-й день недели, то k-й день - это: " << day_c << std::endl;

    return 0;
}
