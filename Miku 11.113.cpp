

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

void solve_113() {
 
    std::vector<int> pages = {150, 200, 100, 300, 120, /* ... 95 других значений ... */ 250};


    int max_pages = INT_MIN; // Инициализируем максимальное значение минимально возможным


    for (int page_count : pages) {
        if (page_count > max_pages) {
            max_pages = page_count;
        }
    }
    std::cout << "Количество страниц в самой толстой книге: " << max_pages << std::endl;
}
