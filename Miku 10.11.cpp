

#include <iostream>
#include <cstdlib>
#include <ctime>

void solve_10_11() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int roll = (std::rand() % 6) + 1; // 1 до 6
    std::cout << "10.11) Результат бросания кубика: " << roll << std::endl;
}
