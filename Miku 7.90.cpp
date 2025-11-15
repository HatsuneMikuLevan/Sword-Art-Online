

#include <iostream>
#include <vector>
#include <numeric>

int main() {
    const int num_subjects = 12;
    std::vector<int> grades(num_subjects);
    std::cout << "Введите 12 оценок ученика (например, от 2 до 5): ";
    for (int i = 0; i < num_subjects; ++i) {
        std::cin >> grades[i];
    }

    bool has_three = false;
    for (int i = 0; i < num_subjects; ++i) {
        if (grades[i] == 3) {
            has_three = true;
            break; // Можно использовать оператор цикла с условием (break)
        }
    }

    if (has_three) {
        std::cout << "Среди оценок есть тройки. Утверждение 'нет троек' неверно." << std::endl;
    } else {
        std::cout << "Среди оценок нет троек. Утверждение 'нет троек' верно." << std::endl;
    }

    return 0;
}
