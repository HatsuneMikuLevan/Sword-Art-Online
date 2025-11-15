

#include <iostream>
#include <vector>

int main() {
    const int size = 20;
    std::vector<int> d(size);

    std::cout << "Введите 20 натуральных чисел:\n";
    for (int i = 0; i < size; ++i) {
        std::cin >> d[i];
    }

    bool found = false;
    int index1 = -1, index2 = -1;

    for (int i = 0; i < size - 1; ++i) {
        if (d[i] % 2 != 0 && d[i+1] % 2 != 0) {
            found = true;
            index1 = i + 1;
            index2 = i + 2;
            break;
        }
    }

    if (found) {
        std::cout << "Найдена первая пара соседних нечетных чисел на позициях: " << index1 << " и " << index2 << std::endl;
    } else {
        std::cout << "Пар соседних нечетных чисел не найдено." << std::endl;
    }

    return 0;
}
