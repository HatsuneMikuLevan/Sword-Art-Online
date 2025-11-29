

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

int main() {
    std::vector<int> rainfalls(31);
   
    rainfalls = {10, 5, 20, 15, 20, /* ... еще 26 значений ... */};

    int max_rain = *std::max_element(rainfalls.begin(), rainfalls.end());
    int first_day = -1;

    for (int i = 0; i < rainfalls.size(); ++i) {
        if (rainfalls[i] == max_rain) {
            first_day = i + 1; // Дата (начиная с 1)
            break; // Находим только первый
        }
    }

    std::cout << "Дата первого самого дождливого дня (июля): " << first_day << std::endl;

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

int main() {
    std::vector<int> rainfalls(31);
   
    rainfalls = {10, 5, 20, 15, 20, /* ... еще 26 значений ... */};

    int max_rain = *std::max_element(rainfalls.begin(), rainfalls.end());
    int last_day = -1;

    for (int i = 0; i < rainfalls.size(); ++i) {
        if (rainfalls[i] == max_rain) {
            last_day = i + 1; // Обновляем до последнего найденного
        }
    }

    std::cout << "Дата последнего самого дождливого дня (июля): " << last_day << std::endl;

    return 0;
}
