

#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    std::cout << "а) Второй, четвертый и т. д. элементы: ";
    for (size_t i = 1; i < arr.size(); i += 2) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "б) Третий, шестой и т. д. элементы: ";
    for (size_t i = 2; i < arr.size(); i += 3) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
