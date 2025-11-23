

#include <iostream>
#include <cstdlib>
#include <ctime>

void solve_10_12() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int player1_roll = (std::rand() % 6) + 1;
    int player2_roll = (std::rand() % 6) + 1;

    std::cout << "10.12) Игрок 1 выбросил: " << player1_roll << ", Игрок 2 выбросил: " << player2_roll << std::endl;

    if (player1_roll > player2_roll) {
        std::cout << "Игрок 1 выиграл!" << std::endl;
    } else if (player2_roll > player1_roll) {
        std::cout << "Игрок 2 выиграл!" << std::endl;
    } else {
        std::cout << "Ничья!" << std::endl;
    }
}
