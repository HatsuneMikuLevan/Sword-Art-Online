

#include <iostream>
#include <vector>

void count_wins_and_draws(const std::vector<int>& results, int& wins, int& draws) {
    wins = 0;
    draws = 0;
    for (int result : results) {
        if (result == 3) {
            wins++;
        } else if (result == 1) {
            draws++;
        }
    }
}
