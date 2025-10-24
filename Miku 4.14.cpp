#include <iostream>

int main() {
    double resistance1, voltage1, resistance2, voltage2;
    std::cout << "Введите сопротивление и напряжение для первого участка: ";
    std::cin >> resistance1 >> voltage1;
    std::cout << "Введите сопротивление и напряжение для второго участка: ";
    std::cin >> resistance2 >> voltage2;
    double current1 = voltage1 / resistance1;
    double current2 = voltage2 / resistance2;
    if (current1 < current2) {
        std::cout << "Меньший ток протекает по первому участку." << std::endl;
    } else if (current2 < current1) {
        std::cout << "Меньший ток протекает по второму участку." << std::endl;
    } else {
        std::cout << "Токи равны." << std::endl;
    }
    return 0;
}
