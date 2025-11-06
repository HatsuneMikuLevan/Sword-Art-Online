

#include <iostream>
#include <string>
#include <algorithm>

void solve_6_56() {
    int n;
    std::cout << "Введите натуральное число: ";
    std::cin >> n;

    std::string s = std::to_string(n);
    int pos_2 = -1;
    int pos_5 = -1;

    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '2' && pos_2 == -1) {
            pos_2 = i;
        }
        if (s[i] == '5' && pos_5 == -1) {
            pos_5 = i;
        }
    }

    if (pos_2 != -1 && pos_5 != -1) {
        if (pos_2 < pos_5) {
            std::cout << "Цифра 2 расположена левее." << std::endl;
        } else {
            std::cout << "Цифра 5 расположена левее." << std::endl;
        }
    } else if (pos_2 != -1) {
        std::cout << "В числе есть только цифра 2." << std::endl;
    } else if (pos_5 != -1) {
        std::cout << "В числе есть только цифра 5." << std::endl;
    } else {
        std::cout << "В числе нет ни цифры 2, ни цифры 5." << std::endl;
    }
}
