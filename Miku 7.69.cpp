

#include <iostream>
#include <vector>

int main() {
    // Пример массива оценок (20 учеников), где не все имеют оценку 5
    std::vector<int> grades = {5, 5, 5, 5, 4, 3, 5, 4, 2, 1, 5, 4, 3, 2, 1, 5, 4, 3, 2, 1};
    int count = 0;
    int i = 0;

    // Цикл продолжается, пока текущая оценка равна 5
    while (grades[i] == 5 && i < grades.size()) {
        count++;
        i++;
    }

    std::cout << "Количество учеников с оценкой 5 (случай 1): " << count << std::endl;
    return 0;
}
