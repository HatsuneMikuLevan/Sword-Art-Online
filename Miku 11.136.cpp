

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

int main() {

    std::vector<int> wind_directions = {1, 2, 3, 4, 5, 6, 7, 8, 1, 2}; 
 

    std::map<int, int> frequency_map;
    for (int dir : wind_directions) {
        frequency_map[dir]++;
    }

    int most_frequent_direction = -1;
    int max_frequency = 0;


    for (auto const& [dir, count] : frequency_map) {
        if (count > max_frequency) {
            max_frequency = count;
            most_frequent_direction = dir;
        }
    }

    std::cout << "Наиболее частое направление ветра (код): " << most_frequent_direction << std::endl;


    std::string direction_name;
    switch (most_frequent_direction) {
        case 1: direction_name = "северный"; break;
        case 2: direction_name = "южный"; break;
        case 3: direction_name = "восточный"; break;
        case 4: direction_name = "западный"; break;
        case 5: direction_name = "северо-западный"; break;
        case 6: direction_name = "северо-восточный"; break;
        case 7: direction_name = "юго-западный"; break;
        case 8: direction_name = "юго-восточный"; break;
        default: direction_name = "неизвестный"; break;
    }

    std::cout << "Наиболее частое направление ветра: " << direction_name << std::endl;
    std::cout << "Жилой комплекс должен быть расположен с противоположной стороны от этого направления." << std::endl;

    return 0;
}
