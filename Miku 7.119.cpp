

#include <iostream>
#include <vector>

int main() {
    std::vector<int> b = {50, 120, 80, 200, 110, 90};
    int last_index = -1;

    for (int i = 0; i < b.size(); ++i) {
        if (b[i] > 100) {
            last_index = i + 1;
        }
    }

    if (last_index != -1) {
        std::cout << "Номер последнего числа, большего 100: " << last_index << std::endl;
    } else {
        std::cout << "Числа больше 100 не найдены." << std::endl;
    }

    return 0;
}
