

#include <iostream>
#include <vector>

int main() {
    std::vector<int> b = {10, -20, 30, -40, 50, -60};
    int last_index = -1;

    for (int i = 0; i < b.size(); ++i) {
        if (b[i] < 0) {
            last_index = i + 1;
        }
    }

    if (last_index != -1) {
        std::cout << "Номер последнего отрицательного числа: " << last_index << std::endl;
    } else {
        std::cout << "Отрицательные числа не найдены." << std::endl;
    }

    return 0;
}
