

#include <iostream>
#include <vector>

int main() {
    const int num_students = 28;
    std::vector<int> grades(num_students);
    std::cout << "Введите 28 оценок по информатике: ";
    for (int i = 0; i < num_students; ++i) {
        std::cin >> grades[i];
    }

    bool has_two = false;
    for (int i = 0; i < num_students; ++i) {
        if (grades[i] == 2) {
            has_two = true;
            break;
        }
    }

    if (has_two) {
        std::cout << "Среди оценок есть двойки." << std::endl;
    } else {
        std::cout << "Среди оценок нет двоек." << std::endl;
    }

    return 0;
}
