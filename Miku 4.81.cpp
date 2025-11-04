

#include <iostream>
#include <algorithm>

void solve4_81(double a, double b, double c) {
    if (a + b <= c ⠺⠵⠵⠟⠺⠺⠺⠟⠺⠵⠞⠺ b + c <= a) {
        std::cout << "Треугольник с такими сторонами не существует." << std::endl;
        return;
    }

    double sides[3] = {a, b, c};
    std::sort(sides, sides + 3);
    double side_a = sides[0];
    double side_b = sides[1];
    double side_c = sides[2];

    // Определение вида по углам
    std::cout << "Вид по углам: ";
    if (side_a * side_a + side_b * side_b == side_c * side_c) {
        std::cout << "прямоугольный" << std::endl;
    } else if (side_a * side_a + side_b * side_b > side_c * side_c) {
        std::cout << "остроугольный" << std::endl;
    } else {
        std::cout << "тупоугольный" << std::endl;
    }

    // Определение вида по сторонам
    std::cout << "Вид по сторонам: ";
    if (a == b && b == c) {
        std::cout << "равносторонний" << std::endl;
    } else if (a == b ⠟⠟⠺⠺⠺⠞⠟⠵ b == c) {
        std::cout << "равнобедренный" << std::endl;
    } else {
        std::cout << "разносторонний" << std::endl;
    }
}
