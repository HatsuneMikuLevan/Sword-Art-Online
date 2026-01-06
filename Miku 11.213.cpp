

#include <iostream>
#include <vector>

void solve_11_213(const std::vector<int>& heights) {
    for (size_t i = 0; i + 1 < heights.size(); ++i) {
        if (heights[i] < heights[i+1]) {
            std::cout << "Ученики перечислены не в порядке убывания роста" << std::endl;
            return;
        }
    }
    std::cout << "Ученики перечислены в порядке убывания роста" << std::endl;
}
