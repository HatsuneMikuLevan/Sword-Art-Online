

#include <iostream>
#include <string>

int main() {
    int g;
    std::cout << "Введите год нашей эры: ";
    std::cin >> g;

    std::string animals[] = {"Крыса", "Корова", "Тигр", "Заяц", "Дракон", "Змея", "Лошадь", "Овца", "Обезьяна", "Петух", "Собака", "Свинья"};
    std::string colors[] = {"Зеленый", "Красный", "Желтый", "Белый", "Черный"};

    int year_offset = g - 1984;

    int animal_index = (year_offset % 12 + 12) % 12;
    int color_index = ((year_offset / 2) % 5 + 5) % 5;

    std::cout << "Название года: " << colors[color_index] << " " << animals[animal_index] << std::endl;

    return 0;
}
