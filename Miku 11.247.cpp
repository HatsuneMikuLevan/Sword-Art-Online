

#include <iostream>
#include <vector>

int main() {
    std::vector<int> p = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}; // Пример массива достаточного размера
    int size = p.size();
    std::vector<int> q(size);

    for (int i = 0; i < size; ++i) {
        if (i >= 2 && i <= 9) { // Индексы 2-9 соответствуют номерам 3-10
            q[i] = p[i];
        } else {
            q[i] = -p[i];
        }
    }

    std::cout << "Array p: ";
    for (int val : p) std::cout << val << " ";
    std::cout << std::endl;

    std::cout << "Array q: ";
    for (int val : q) std::cout << val << " ";
    std::cout << std::endl;

    return 0;
}
