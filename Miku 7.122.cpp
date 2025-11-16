

#include <iostream>
#include <vector>
#include <cmath>

int main() {
    std::vector<int> x = {12, 25, 33, 40, 55, 61, 75};
    int last_index = -1;

    for (int i = 0; i < x.size(); ++i) {
        if (std::abs(x[i] % 10) == 5) {
            last_index = i + 1;
        }
    }

    if (last_index != -1) {
        std::cout << "Номер последнего числа, оканчивающегося цифрой 5: " << last_index << std::endl;
    } else {
        std::cout << "Чисел, оканчивающихся цифрой 5, не найдено." << std::endl;
    }

    return 0;
}
