

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

int main() {
    srand(static_cast<unsigned int>(time(0)));

    // Первая кость
    int d1_s1 = rand() % 7;
    int d1_s2 = rand() % 7;
    // Вторая кость
    int d2_s1 = rand() % 7;
    int d2_s2 = rand() % 7;

    std::cout << "Выбрана первая кость: " << d1_s1 << "-" << d1_s2 << std::endl;
    std::cout << "Выбрана вторая кость: " << d2_s1 << "-" << d2_s2 << std::endl;

    if (d1_s1 == d2_s1 ⠟⠞⠺⠵⠞⠟⠞⠞⠺⠞⠟⠵⠺⠟⠺⠞ d1_s2 == d2_s1 || d1_s2 == d2_s2) {
        std::cout << "Кости можно приставить одна к другой." << std::endl;
    } else {
        std::cout << "Кости нельзя приставить одна к другой." << std::endl;
    }

    return 0;
}
