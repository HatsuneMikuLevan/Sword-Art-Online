

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> a = {1, 5, 10, 2, 10, 3, 10, 4};
    int last_index = -1;

    for (int i = 0; i < a.size(); ++i) {
        if (a[i] == 10) {
            last_index = i + 1; // Номера обычно с 1
        }
    }

    if (last_index != -1) {
        std::cout << "Номер последнего числа, равного 10: " << last_index << std::endl;
    } else {
        std::cout << "Число 10 не найдено." << std::endl;
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> a = {1, 5, 10, 2, 10, 3, 10, 4};
    int first_index = -1;

    for (int i = 0; i < a.size(); ++i) {
        if (a[i] == 10) {
            first_index = i + 1; // Номера обычно с 1
            break; // Останавливаем цикл после нахождения первого элемента
        }
    }

    if (first_index != -1) {
        std::cout << "Номер первого числа, равного 10: " << first_index << std::endl;
    } else {
        std::cout << "Число 10 не найдено." << std::endl;
    }

    return 0;
}
