

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

int main() {
    std::vector<int> speeds(40);

    speeds = {180, 200, 190, 200, 185, /* ... еще 35 значений ... */};

    int max_speed = *std::max_element(speeds.begin(), speeds.end());
    int first_index = -1;

    for (int i = 0; i < speeds.size(); ++i) {
        if (speeds[i] == max_speed) {
            first_index = i + 1; // Порядковый номер (начиная с 1)
            break;
        }
    }

    std::cout << "Порядковый номер первого самого быстрого автомобиля: " << first_index << std::endl;

    return 0;
}
