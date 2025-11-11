

#include <iostream>
#include <vector>

int main() {
    std::vector<int> a(20);

    for (int i = 0; i < 20; ++i) {
        a[i] = i + 1;
    }

    int sum = 0;
  
    for (int i = 0; i < 20; ++i) {
        if ((i + 1) % 2 == 0) { // Проверка, что номер элемента четный
            sum += a[i];
        }
    }

    std::cout << "Сумма элементов с четными номерами (a2+a4+...): " << sum << std::endl;
    return 0;
}
