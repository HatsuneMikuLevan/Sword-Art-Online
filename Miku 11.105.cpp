

#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5, 5};
    bool has_duplicates = false;
    std::unordered_set<int> seen_elements;

    for (int element : arr) {
        if (seen_elements.count(element)) {
            has_duplicates = true;
            break;
        }
        seen_elements.insert(element);
    }

    if (has_duplicates) {
        std::cout << "В массиве есть одинаковые элементы." << std::endl;
    } else {
        std::cout << "В массиве нет одинаковых элементов." << std::endl;
    }

    return 0;
}
