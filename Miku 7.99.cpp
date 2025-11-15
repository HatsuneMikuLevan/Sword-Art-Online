

#include <iostream>
#include <vector>

int main() {
    std::vector<int> d;
    int num;
    std::cout << "Введите последовательность целых чисел (для завершения введите 9999):\n";

    while (std::cin >> num && num != 9999) {
        d.push_back(num);
    }

    if (d.size() < 2) {
        std::cout << "Количество чисел в последовательности меньше двух." << std::endl;
        return 0;
    }

    bool found = false;
    int index1 = -1, index2 = -1;

    for (int i = 0; i < d.size() - 1; ++i) {
        if (d[i] % 2 == 0 && d[i+1] % 2 == 0) {
            found = true;
            index1 = i + 1;
            index2 = i + 2;
            break;
        }
    }

    if (found) {
        std::cout << "Найдена первая пара соседних четных чисел на позициях: " << index1 << " и " << index2 << std::endl;
    } else {
        std::cout << "Пар соседних четных чисел не найдено." << std::endl;
    }

    return 0;
}
