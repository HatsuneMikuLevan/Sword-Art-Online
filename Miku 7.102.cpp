

#include <iostream>
#include <vector>
#include <numeric>

bool isDescending(const std::vector<int>& heights) {
    if (heights.empty() || heights.size() == 1) {
        return true;
    }
    for (size_t i = 0; i < heights.size() - 1; ++i) {
        if (heights[i] < heights[i+1]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> studentHeights = {180, 175, 175, 170, 165};
    // std::vector<int> studentHeights = {180, 170, 175, 165};

    if (isDescending(studentHeights)) {
        std::cout << "Ученики перечислены в списке в порядке убывания их роста." << std::endl;
    } else {
        std::cout << "Ученики не перечислены в списке в порядке убывания их роста." << std::endl;
    }

    return 0;
}
