

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main() {
    std::vector<int> arr = {100, 90, 80, 70, 60, 50, 40};
    int a = 65;
    int first_smaller_idx = -1;
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] < a) {
            first_smaller_idx = i;
            break;
        }
    }
    std::cout << "Номер первого элемента, меньшего " << a << ": ";
    if (first_smaller_idx != -1) {
        std::cout << first_smaller_idx + 1 << std::endl;
    } else {
        std::cout << "Таких элементов нет" << std::endl;
    }

    return 0;
}
