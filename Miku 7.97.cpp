

#include <iostream>
#include <vector>

int main() {
    std::vector<int> a;
    int num;
    std::cout << "Введите последовательность целых чисел (для завершения введите -1):\n";

    while (std::cin >> num && num != -1) {
        a.push_back(num);
    }

    if (a.size() < 2) {
        std::cout << "Количество чисел в последовательности меньше двух." << std::endl;
        return 0;
    }

    bool found = false;
    int index1 = -1, index2 = -1;

    for (int i = 0; i < a.size() - 1; ++i) {
        if (a[i] == a[i+1]) {
            found = true;
            index1 = i + 1;
            index2 = i + 2;
            break;
        }
    }

    if (found) {
        std::cout << "Найдена первая пара одинаковых соседних чисел на позициях: " << index1 << " и " << index2 << std::endl;
    } else {
        std::cout << "Одинаковых соседних чисел не найдено." << std::endl;
    }

    return 0;
}
