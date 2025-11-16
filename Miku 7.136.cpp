

#include <iostream>
#include <limits>

int main() {
    double best_time = std::numeric_limits<double>::max();
    double current_time;
    char choice;

    std::cout << "Введите результаты спортсменов. Введите 'q' для выхода." << std::endl;

    while (std::cin >> current_time) {
        if (current_time < best_time) {
            best_time = current_time;
        }
        std::cout << "Лучший результат на данный момент: " << best_time << std::endl;
        std::cout << "Введите следующий результат или 'q' для выхода: ";
    }

    return 0;
}
