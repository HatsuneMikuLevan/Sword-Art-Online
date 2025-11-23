

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>

int main() {
    srand(time(0));
    std::vector<std::string> ranks = {"6", "7", "8", "9", "10", "валет", "дама", "король", "туз"};

    int chosen_index = rand() % ranks.size();
    std::string chosen_rank = ranks[chosen_index];

    std::cout << "Выбрана карта достоинством: " << chosen_rank << std::endl;

    return 0;
}
