

#include <iostream>
#include <vector>
#include <limits>

int main() {


    const int N = 5; // Пример: 5 квартир
    int people;
    int max_people = std::numeric_limits<int>::min();
    int max_apt_num = 0;
    int i = 0;

    while (i < N) {
        std::cin >> people[i];
        if (people[i] > max_people) {
            max_people = people[i];
            max_apt_num = i + 1; // Номер квартиры начинается с 1
        }
        i++;
    }

    std::cout << "Больше всего жильцов в квартире номер: " << max_apt_num << std::endl;

    return 0;
}
