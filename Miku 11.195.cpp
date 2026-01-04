

#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr = {5, 5, 5, 5, 8, 9, 1, 2};
    int count = 0;
    int i = 0;

    while (i < arr.size() && arr[i] == arr[0]) {
        count++;
        i++;
    }

    std::cout << "Количество первых равных элементов: " << count << std::endl;
    std::cout << "Элементы после них: ";
    int j = i;
    while (j < arr.size()) {
        std::cout << arr[j] << " ";
        j++;
    }
    std::cout << std::endl;
    return 0;
}
