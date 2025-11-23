

#include <iostream>
#include <random>
#include <ctime>

void solve_10_4() {
    std::cout << "Решение задачи 10.4:" << std::endl;
    std::mt19937 rng(static_cast<unsigned int>(std::time(nullptr)));
    std::uniform_int_distribution<int> dist(0, 3);
    int count_0_1 = 0;

    for (int i = 0; i < 50; ++i) {
        int num = dist(rng);
        if (num == 0 || num == 1) {
            std::cout << num << " ";
            count_0_1++;
        }
    }
    std::cout << std::endl << "Всего выведено чисел (0 или 1): " << count_0_1 << std::endl;
}

int main() {
    solve_10_4();
    return 0;
}
