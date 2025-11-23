

#include <iostream>
#include <random>
#include <ctime>

void solve_10_6() {
    std::cout << "Решение задачи 10.6:" << std::endl;
    std::mt19937 rng(static_cast<unsigned int>(std::time(nullptr)));
    std::uniform_int_distribution<int> dist(0, 1);
    int zeros_count = 0;
    int ones_count = 0;

    for (int i = 0; i < 50; ++i) {
        int num = dist(rng);
        if (num == 0) {
            zeros_count++;
        } else {
            ones_count++;
        }
    }
    std::cout << "Количество нулей: " << zeros_count << std::endl;
    std::cout << "Количество единиц: " << ones_count << std::endl;
}

int main() {
    solve_10_6();
    return 0;
}
