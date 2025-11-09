

#include <iostream>
#include <string>

int main() {
    int points;
    std::cout << "Введите количество очков: ";
    std::cin >> points;

    std::string result = (points == 3) ? "выигрыш" : ((points == 1) ? "ничья" : "проигрыш");
    std::cout << "Результат игры: " << result << std::endl;

    return 0;
}
