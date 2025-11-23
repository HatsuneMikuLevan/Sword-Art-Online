

#include <iostream>
#include <cstdlib>
#include <ctime>

void solve_10_8() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int result = std::rand() % 2; // 0 или 1
    std::cout << "10.8) Результат подбрасывания монеты: " << (result == 0 ? "Решка (0)" : "Орел (1)") << std::endl;
}
