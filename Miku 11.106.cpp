

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5, 5};
    std::unordered_map<int, int> counts;

    for (int element : arr) {
        counts[element]++;
    }

    int count_of_twos = 0;
    int count_of_ones = 0;
    for (auto const& [key, val] : counts) {
        if (val == 2) {
            count_of_twos++;
        } else if (val == 1) {
            count_of_ones++;
        } else {
            // Если есть элемент, встречающийся 3 или более раз, условие не выполняется
            count_of_twos = 0; // Сброс
            break;
        }
    }

    if (count_of_twos == 1 && count_of_ones == (arr.size() - 2)) {
        std::cout << "В массиве ровно два одинаковых элемента." << std::endl;
    } else {
        std::cout << "В массиве нет ровно двух одинаковых элементов." << std::endl;
    }

    return 0;
}
