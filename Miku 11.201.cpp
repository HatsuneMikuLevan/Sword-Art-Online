

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main() {
    std::vector<int> power = {150, 180, 210, 190, 200, 220, 170, 160, 140, 130, 120, 110, 100, 90, 80, 70, 60, 50, 40, 30, 20, 10, 250, 260, 270, 280, 290, 300, 310, 320}; // 30 мощностей
    bool has_high_power = false;
    for (int p : power) {
        if (p > 200) {
            has_high_power = true;
            break;
        }
    }
    std::cout << "Есть ли модель с мощностью двигателя более 200 л.с.? ";
    if (has_high_power) {
        std::cout << "Да" << std::endl;
    } else {
        std::cout << "Нет" << std::endl;
    }

    return 0;
}
