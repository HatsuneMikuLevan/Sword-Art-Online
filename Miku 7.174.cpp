

#include <iostream>
#include <algorithm>
#include <functional>

int main() {
    const int size = 12;
    int scores[size];
    std::cout << "Введите очки 12 команд: " << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> scores[i];
    }

    std::sort(scores, scores + size, std::greater<int>());

    std::cout << "Очки команд, занявших 1-е, 2-е и 3-е места:" << std::endl;
    std::cout << "1-е место: " << scores[0] << std::endl;
    std::cout << "2-е место: " << scores[1] << std::endl;
    std::cout << "3-е место: " << scores[2] << std::endl;

    return 0;
}
