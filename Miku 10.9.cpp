

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

void solve_10_9() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    auto simulate_tosses = [](int num_tosses) {
        int count0 = 0;
        int count1 = 0;
        for (int i = 0; i < num_tosses; ++i) {
            if (std::rand() % 2 == 0) {
                count0++;
            } else {
                count1++;
            }
        }
        std::cout << "Для " << num_tosses << " подбрасываний:" << std::endl;
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "  Частота 0: " << static_cast<double>(count0) / num_tosses << std::endl;
        std::cout << "  Частота 1: " << static_cast<double>(count1) / num_tosses << std::endl;
    };

    solve_10_8(); // Инициализация std::srand уже была, но можно оставить для порядка
    simulate_tosses(100);
    simulate_tosses(1000);
}
