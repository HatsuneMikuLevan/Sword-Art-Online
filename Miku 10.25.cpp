
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

int main() {
    // Инициализация генератора случайных чисел
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Генерация случайных чисел a, b, c, d от 1 до 8
    int a = (std::rand() % 8) + 1;
    int b = (std::rand() % 8) + 1;
    int c = (std::rand() % 8) + 1;
    int d = (std::rand() % 8) + 1;

    std::cout << "Начальная позиция (a, b): (" << a << ", " << b << ")" << std::endl;
    std::cout << "Конечная позиция (c, d): (" << c << ", " << d << ")" << std::endl;

    // а) Проверка хода белой пешки (движение снизу вверх)
    bool whitePawnMove = false;
    // Обычный ход на одну клетку вперед
    if (a == c && d == b + 1) {
        whitePawnMove = true;
    }
    // Ход при взятии фигуры соперника (по диагонали)
    if (std::abs(a - c) == 1 && d == b + 1) {
        whitePawnMove = true;
    }
    std::cout << "\nа) Ход белой пешки возможен: " << (whitePawnMove ? "Да" : "Нет") << std::endl;

    // б) Проверка хода черной пешки (движение сверху вниз)
    bool blackPawnMove = false;
    // Обычный ход на одну клетку вперед
    if (a == c && d == b - 1) {
        blackPawnMove = true;
    }
    // Ход при взятии фигуры соперника (по диагонали)
    if (std::abs(a - c) == 1 && d == b - 1) {
        blackPawnMove = true;
    }
    std::cout << "б) Ход черной пешки возможен: " << (blackPawnMove ? "Да" : "Нет") << std::endl;

    // в) Проверка угрозы полю конем
    bool knightThreat = false;
    // Ход коня (L-образный)
    if ((std::abs(a - c) == 1 && std::abs(b - d) == 2) || (std::abs(a - c) == 2 && std::abs(b - d) == 1)) {
        knightThreat = true;
    }
    std::cout << "в) Конь угрожает полю: " << (knightThreat ? "Да" : "Нет") << std::endl;

    return 0;
}
