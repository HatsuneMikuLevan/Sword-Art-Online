11.169

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

void updateHeights(std::vector<int>& heights, int newValue, int knownInfo) {

    if (knownInfo > 0 && knownInfo <= heights.size() + 1) {

        heights.insert(heights.begin() + (knownInfo - 1), newValue); 
    } 
    // Случай 2: Известен рост нового ученика (knownInfo == newValue)
    else if (knownInfo == newValue) {

        auto it = std::upper_bound(heights.begin(), heights.end(), newValue, std::greater<int>());
        heights.insert(it, newValue);
    }
}

int main() {
    // Данные упорядочены по убыванию:
    std::vector<int> heights = {185, 180, 175, 170, 165}; 
    int newHeight = 178;

    // 1) Известен порядковый номер (например, 3)
    std::vector<int> h1 = heights;
    int position = 3;
    // knownInfo > 0
    updateHeights(h1, newHeight, position);
    std::cout << "1) С известным порядковым номером " << position << " (" << newHeight << " см): ";
    for (int h : h1) std::cout << h << " ";
    std::cout << std::endl;

    // 2) Известен рост нового ученика (178)
    std::vector<int> h2 = heights;
    // knownInfo == newValue
    updateHeights(h2, newHeight, newHeight); 
    std::cout << "2) С известным ростом " << newHeight << " см: ";
    for (int h : h2) std::cout << h << " ";
    std::cout << std::endl; // Ожидаем: 185 180 178 175 170 165
    
    return 0;
}
