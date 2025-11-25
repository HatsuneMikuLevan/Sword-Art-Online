

#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
    int k = 6; 

    // а) является ли 5-й элемент массива положительным числом;

    bool isFifthPositive = (arr[4] > 0);
    std::cout << "a) 5-й элемент положительный? " << (isFifthPositive ? "Да" : "Нет") << std::endl;

    // б) является ли k-й элемент массива четным числом;
 
    bool isKthEven = (arr[k - 1] % 2 == 0);
    std::cout << "б) k-й элемент четный? " << (isKthEven ? "Да" : "Нет") << std::endl;

    // в) какой элемент массива больше: k-й или 5-й.
    if (arr[k - 1] > arr[4]) {
        std::cout << "в) k-й элемент (" << arr[k - 1] << ") больше, чем 5-й элемент (" << arr[4] << ")" << std::endl;
    } else if (arr[4] > arr[k - 1]) {
        std::cout << "в) 5-й элемент (" << arr[4] << ") больше, чем k-й элемент (" << arr[k - 1] << ")" << std::endl;
    } else {
        std::cout << "в) 5-й и k-й элементы равны (" << arr[4] << ")" << std::endl;
    }

    return 0;
}
