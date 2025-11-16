

#include <iostream>
#include <vector>

int main() {
    std::vector<int> c = {10, 20, 25, 30, 40, 25, 50};
    int last_index = -1;

    for (int i = 0; i < c.size(); ++i) {
        if (c[i] == 25) {
            last_index = i + 1;
        }
    }

    if (last_index != -1) {
        std::cout << "Номер последнего числа, равного 25: " << last_index << std::endl;
    } else {
        std::cout << "Числа, равного 25, не найдено." << std::endl;
    }

    return 0;
}
