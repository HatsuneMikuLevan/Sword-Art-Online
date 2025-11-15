

#include <iostream>
#include <vector>

int main() {

    std::vector<int> precipitations = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int count = 0;
    int i = 0;

    // Цикл продолжается, пока нет осадков и индекс в пределах массива
    while (i < precipitations.size() && precipitations[i] == 0) {
        count++;
        i++;
    }

    std::cout << "Количество первых дней без осадков (случай 2): " << count << std::endl;
    return 0;
}
