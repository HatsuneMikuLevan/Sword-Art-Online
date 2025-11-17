

#include <iostream>

int main() {
    int maxElement = 8;
    int countMax = 4;
    int A1 = 0;
    int A2 = 8;

    // Case A = 0
    int newCount1 = countMax;
    if (A1 > maxElement) {
        newCount1 = 1;
        maxElement = A1;
    } else if (A1 == maxElement) {
        newCount1++;
    }
    std::cout << "При A = 0, количество максимальных элементов: " << newCount1 << std::endl;

    // Case A = 8
    int newCount2 = countMax;
    if (A2 > maxElement) {
        newCount2 = 1;
    } else if (A2 == maxElement) {
        newCount2++;
    }
    std::cout << "При A = 8, количество максимальных элементов: " << newCount2 << std::endl;

    return 0;
}
