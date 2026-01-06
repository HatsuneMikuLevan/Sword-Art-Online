

#include <iostream>
#include <vector>

void solve_11_215(const std::vector<int>& arr) {
    if (arr.empty()) return;

    int first_val = arr[0];
    size_t count = 0;
    size_t i = 0;


    while (i < arr.size() && arr[i] == first_val) {
        count++;
        i++;
    }

    std::cout << "Количество первых равных элементов: " << count << std::endl;
    std::cout << "Элементы, следующие за последним из них: ";
    for (size_t j = i; j < arr.size(); ++j) {
        std::cout << arr[j] << " ";
    }
    std::cout << std::endl;
}
