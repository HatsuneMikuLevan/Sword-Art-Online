

#include <iostream>
#include <vector>

void solve_11_30(const std::vector<int>& wins) {
    std::cout << "Номера команд с менее чем тремя победами: ";
    for (int i = 0; i < wins.size(); ++i) {
        if (wins[i] < 3) {
            std::cout << i + 1 << " ";
        }
    }
    std::cout << std::endl;
}

