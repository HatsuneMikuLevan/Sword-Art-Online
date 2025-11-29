

#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5, 5};
    int found_element = -1;
    std::unordered_set<int> seen_elements;

    for (int element : arr) {
        if (seen_elements.count(element)) {
            found_element = element;
            break;
        }
        seen_elements.insert(element);
    }

    if (found_element != -1) {
        std::cout << "Одинаковые элементы: " << found_element << std::endl;
    } else {
        std::cout << "Одинаковые элементы не найдены (что противоречит условию задачи)." << std::endl;
    }

    return 0;
}
