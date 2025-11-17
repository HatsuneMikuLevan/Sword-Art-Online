

#include <iostream>
#include <vector>
#include <limits>

int main() {
    int num_apartments;
    std::cout << "Введите количество квартир: ";
    std::cin >> num_apartments;

    if (num_apartments <= 0) {
        std::cout << "Некорректное количество квартир." << std::endl;
        return 1;
    }

    std::vector<int> residents(num_apartments);
    int max_residents = std::numeric_limits<int>::min();
    int last_max_apartment_num = -1;

    for (int i = 0; i < num_apartments; ++i) {
        std::cout << "Введите количество жильцов в квартире #" << i + 1 << ": ";
        std::cin >> residents[i];

        // Условный оператор
        if (residents[i] >= max_residents) {
            max_residents = residents[i];
            last_max_apartment_num = i + 1;
        }
    }

    std::cout << "Квартира с наибольшим количеством жильцов (максимальный номер): #" << last_max_apartment_num << std::endl;

    return 0;
}
