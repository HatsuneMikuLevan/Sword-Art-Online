

#include <iostream>
#include <vector>
#include <numeric>

int main() {
    // Пример данных о жителях в домах (нумерация подряд)
    std::vector<int> residents = {5, 3, 10, 4, 8, 2, 7, 6}; // 8 домов
    int even_side_residents = 0;
    int odd_side_residents = 0;

    for (int i = 0; i < residents.size(); ++i) {
        // Номера домов считаются с 1
        if ((i + 1) % 2 == 0) {
            even_side_residents += residents[i];
        } else {
            odd_side_residents += residents[i];
        }
    }

    if (even_side_residents > odd_side_residents) {
        std::cout << "На стороне с четными номерами проживает больше жителей." << std::endl;
    } else if (odd_side_residents > even_side_residents) {
        std::cout << "На стороне с нечетными номерами проживает больше жителей." << std::endl;
    } else {
        std::cout << "Количество жителей на обеих сторонах одинаково." << std::endl;
    }

    return 0;
}
