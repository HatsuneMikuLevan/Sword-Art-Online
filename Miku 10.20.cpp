

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>

int main() {
    srand(time(0));
    std::vector<std::string> ranks = {"шестерка", "семерка", "восьмерка", "девятка", "десятка", "валет", "дама", "король", "туз"};
    std::vector<std::string> suits = {"пик", "треф", "бубен", "червей"};

    int chosen_rank_index = rand() % ranks.size();
    int chosen_suit_index = rand() % suits.size();
    std::string chosen_rank = ranks[chosen_rank_index];
    std::string chosen_suit = suits[chosen_suit_index];

    std::cout << "Выбрана " << chosen_rank << " " << chosen_suit << std::endl;

    return 0;
}
