

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

void solve_7146() {
    int n;
    std::cout << "Введите количество людей в группе: ";
    std::cin >> n;

    double max_height = -1.0;
    double min_height = INT_MAX;

    for (int i = 0; i < n; ++i) {
        double height;
        std::cout << "Введите рост человека #" << i + 1 << ": ";
        std::cin >> height;

        if (height > max_height) {
            max_height = height;
        }
        if (height < min_height) {
            min_height = height;
        }
    }

    double difference = max_height - min_height;
    std::cout << "Рост самого высокого превышает рост самого низкого на: " << difference << std::endl;
}
