

#include <iostream>
#include <vector>

int main() {
    const int size = 15;
    std::vector<int> a(size); 

    std::cout << "Введите 15 натуральных чисел:\n";
    for (int i = 0; i < size; ++i) {
        std::cin >> a[i];
    }

    bool found = false;
    int index1 = -1, index2 = -1;

    for (int i = 0; i < size - 1; ++i) {
        if (a[i] == a[i+1]) {
            found = true;
            index1 = i + 1;
            index2 = i + 2;
            break; // Выход из цикла после нахождения первой пары
        }
    }

    if (found) {
        std::cout << "Найдена первая пара одинаковых соседних чисел на позициях: " << index1 << " и " << index2 << std::endl;
    } else {
        std::cout << "Одинаковых соседних чисел не найдено." << std::endl;
    }

    return 0;
}
