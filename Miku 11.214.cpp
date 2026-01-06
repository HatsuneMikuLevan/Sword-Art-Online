

#include <iostream>
#include <vector>

void solve_11_214(const std::vector<int>& scores) {
    for (size_t i = 0; i + 1 < scores.size(); ++i) {
        if (scores[i] < scores[i+1]) {
            std::cout << "Команды перечислены не в соответствии с занятыми местами" << std::endl;
            return;
        }
    }
    std::cout << "Команды перечислены в соответствии с занятыми местами" << std::endl;
}
