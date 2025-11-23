

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int player1_wins = 0;
    int player2_wins = 0;
    int draws = 0;
    int num_games = 10; // Количество игр

    for (int i = 0; i < num_games; ++i) {
        int roll_p1 = (rand() % 6) + 1;
        int roll_p2 = (rand() % 6) + 1;

        if (roll_p1 > roll_p2) {
            player1_wins++;
        } else if (roll_p2 > roll_p1) {
            player2_wins++;
        } else {
            draws++;
        }
    }

    std::cout << "Результаты после " << num_games << " игр:" << std::endl;
    std::cout << "Побед Игрока 1: " << player1_wins << std::endl;
    std::cout << "Побед Игрока 2: " << player2_wins << std::endl;
    std::cout << "Ничьих: " << draws << std::endl;

    return 0;
}
