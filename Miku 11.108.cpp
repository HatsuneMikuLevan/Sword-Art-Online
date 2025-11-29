

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> arr = {10, -4, 12, 56, -4, -89};
    int sign_changes = 0;

    if (arr.size() < 2) {
        std::cout << "Недостаточно элементов для смены знака." << std::endl;
        return 0;
    }

    for (int i = 1; i < arr.size(); ++i) {
        // Проверяем, имеют ли текущий и предыдущий элементы разные знаки
     
        if ((arr[i - 1] > 0) != (arr[i] > 0)) {
            sign_changes++;
        }
    }

    std::cout << "Количество смен знака: " << sign_changes << std::endl;
    return 0;
}
