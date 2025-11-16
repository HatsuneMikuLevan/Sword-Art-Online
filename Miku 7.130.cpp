

#include <iostream>
#include <vector>

int main() {
    std::vector<int> a = {1, 2, 2, 3, 4, 4, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17}; // 20 чисел
    int repetitions_count = 0;

    for (int i = 1; i < a.size(); ++i) {
        if (a[i] == a[i - 1]) {
            repetitions_count++;
        }
    }

    std::cout << "Количество повторений (пар равных соседних чисел): " << repetitions_count << std::endl;

    return 0;
}
