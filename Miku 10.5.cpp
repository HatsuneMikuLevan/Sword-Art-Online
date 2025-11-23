

#include <iostream>
#include <random>
#include <ctime>

void solve_10_5() {
    std::cout << "Решение задачи 10.5:" << std::endl;
    std::mt19937 rng(static_cast<unsigned int>(std::time(nullptr)));
    std::uniform_int_distribution<int> dist(0, 5);
    int odd_count = 0;

    for (int i = 0; i < 30; ++i) {
        int num = dist(rng);
        if (num % 2 != 0) {
            std::cout << num << " ";
            odd_count++;
        }
    }
    std::cout << std::endl << "Всего выведено нечетных чисел: " << odd_count << std::endl;
}

int main() {
    solve_10_5();
    return 0;
}
