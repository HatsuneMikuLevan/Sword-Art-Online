

#include <iostream>
#include <cmath>
#include <numeric>

using namespace std;

// Функция для проверки хода ладьи
bool can_move_rook(int x1, int y1, int x2, int y2) {
    return (x1 == x2) || (y1 == y2);
}

// Функция для проверки атаки ладьи
bool can_attack_rook(int x1, int y1, int x2, int y2) {
    return can_move_rook(x1, y1, x2, y2);
}

// Функция для проверки хода слона
bool can_move_bishop(int x1, int y1, int x2, int y2) {
    return abs(x1 - x2) == abs(y1 - y2);
}

// Функция для проверки атаки слона
bool can_attack_bishop(int x1, int y1, int x2, int y2) {
    return can_move_bishop(x1, y1, x2, y2);
}

// Функция для проверки хода ферзя
bool can_move_queen(int x1, int y1, int x2, int y2) {
    return can_move_rook(x1, y1, x2, y2) || can_move_bishop(x1, y1, x2, y2);
}

// Функция для проверки атаки ферзя
bool can_attack_queen(int x1, int y1, int x2, int y2) {
    return can_move_queen(x1, y1, x2, y2);
}

// Функция для проверки хода коня
bool can_move_knight(int x1, int y1, int x2, int y2) {
    int dx = abs(x1 - x2);
    int dy = abs(y1 - y2);
    return (dx == 1 && dy == 2) || (dx == 2 && dy == 1);
}

// Функция для проверки атаки коня
bool can_attack_knight(int x1, int y1, int x2, int y2) {
    return can_move_knight(x1, y1, x2, y2);
}

// Функция для проверки хода короля
bool can_move_king(int x1, int y1, int x2, int y2) {
    int dx = abs(x1 - x2);
    int dy = abs(y1 - y2);
    return dx <= 1 && dy <= 1;
}

// Функция для проверки атаки короля
bool can_attack_king(int x1, int y1, int x2, int y2) {
    return can_move_king(x1, y1, x2, y2);
}

// Главная функция для определения возможности хода
bool can_white_move(char white_piece, int a, int b, int e, int f) {
    switch (white_piece) {
        case 'R': return can_move_rook(a, b, e, f);
        case 'B': return can_move_bishop(a, b, e, f);
        case 'Q': return can_move_queen(a, b, e, f);
        case 'K': return can_move_knight(a, b, e, f);
        case 'G': return can_move_king(a, b, e, f); // G for King (Король)
        default: return false;
    }
}

// Главная функция для определения, находится ли поле под ударом черной фигуры
bool is_under_attack(char black_piece, int c, int d, int e, int f) {
    switch (black_piece) {
        case 'R': return can_attack_rook(c, d, e, f);
        case 'B': return can_attack_bishop(c, d, e, f);
        case 'Q': return can_attack_queen(c, d, e, f);
        case 'K': return can_attack_knight(c, d, e, f);
        case 'G': return can_attack_king(c, d, e, f); // G for King (Король)
        default: return false;
    }
}

int main() {
    // Пример использования:
    // Белая ладья на (1,1), черная ладья на (8,8).
    // Проверить, может ли белая пойти на (1,5).
    int a = 1, b = 1, c = 8, d = 8, e = 1, f = 5;
    char white_p = 'R', black_p = 'R';

    if (can_white_move(white_p, a, b, e, f) && !is_under_attack(black_p, c, d, e, f)) {
        cout << "Белая фигура может пойти на поле (" << e << "," << f << ")" << endl;
    } else {
        cout << "Белая фигура не может пойти на поле (" << e << "," << f << ")" << endl;
    }

    // Для решения всех подзадач (а-ф) необходимо реализовать ввод координат 
    // через датчик случайных чисел, как указано в задании, 
    // и вызывать функции для соответствующих пар фигур.
    // Например, для пункта а):
    // white_p = 'R'; black_p = 'R';
    // и т.д.

    return 0;
}
