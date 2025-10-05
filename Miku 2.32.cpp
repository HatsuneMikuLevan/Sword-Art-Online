#include <iostream>
#include <iomanip>

int main() {
    double cost_monitor, cost_system_block, cost_keyboard, cost_mouse;
    int n;

    std::cout << "Введите стоимость монитора: ";
    std::cin >> cost_monitor;
    std::cout << "Введите стоимость системного блока: ";
    std::cin >> cost_system_block;
    std::cout << "Введите стоимость клавиатуры: ";
    std::cin >> cost_keyboard;
    std::cout << "Введите стоимость мыши: ";
    std::cin >> cost_mouse;

    std::cout << "Введите количество компьютеров (N): ";
    std::cin >> n;

    double cost_one_computer = cost_monitor + cost_system_block + cost_keyboard + cost_mouse;
    double total_cost = cost_one_computer * n;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Стоимость одного компьютера: " << cost_one_computer << std::endl;
    std::cout << "Общая стоимость " << n << " компьютеров: " << total_cost << std::endl;

    return 0;
}
