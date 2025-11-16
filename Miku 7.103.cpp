

#include <iostream>
#include <vector>
#include <numeric>

bool areScoresInOrder(const std::vector<int>& scores) {
    if (scores.empty() || scores.size() == 1) {
        return true;
    }
    for (size_t i = 0; i < scores.size() - 1; ++i) {
        if (scores[i] < scores[i+1]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> teamScores = {60, 55, 55, 40, 30};
    // std::vector<int> teamScores = {60, 55, 40, 45, 30};

    if (areScoresInOrder(teamScores)) {
        std::cout << "Команды перечислены в списке в соответствии с занятыми ими местами." << std::endl;
    } else {
        std::cout << "Команды не перечислены в списке в соответствии с занятыми ими местами." << std::endl;
    }

    return 0;
}
