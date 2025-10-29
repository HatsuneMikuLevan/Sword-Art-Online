#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

// Функция для проверки, может ли ладья атаковать поле
bool canRookAttack(int x1, int y1, int x2, int y2) {
    return x1 == x2 || y1 == y2;
}

// Функция для проверки, может ли слон атаковать поле
bool canBishopAttack(int x1, int y1, int x2, int y2) {
    return abs(x1 - x2) == abs(y1 - y2);
}

// Функция для проверки, может ли ферзь атаковать поле
bool canQueenAttack(int x1, int y1, int x2, int y2) {
    return canRookAttack(x1, y1, x2, y2) || canBishopAttack(x1, y1, x2, y2);
}

// Функция для проверки, может ли конь атаковать поле
bool canKnightAttack(int x1, int y1, int x2, int y2) {
    int dx = abs(x1 - x2);
    int dy = abs(y1 - y2);
    return (dx == 1 && dy == 2) || (dx == 2 && dy == 1);
}

// Функция для проверки, может ли король атаковать поле
bool canKingAttack(int x1, int y1, int x2, int y2) {
    int dx = abs(x1 - x2);
    int dy = abs(y1 - y2);
    return dx <= 1 && dy <= 1;
}

// Функция для проверки, может ли белая фигура пойти на поле
bool canWhiteMove(const string& white_fig, int a, int b, int e, int f) {
    if (white_fig == "ладья") {
        return canRookAttack(a, b, e, f);
    } else if (white_fig == "слон") {
        return canBishopAttack(a, b, e, f);
    } else if (white_fig == "ферзь") {
        return canQueenAttack(a, b, e, f);
    } else if (white_fig == "конь") {
        return canKnightAttack(a, b, e, f);
    } else if (white_fig == "король") {
        return canKingAttack(a, b, e, f);
    }
    return false;
}

// Функция для проверки, атаковано ли поле черной фигурой
bool isBlackAttacking(const string& black_fig, int c, int d, int e, int f) {
    if (black_fig == "ладья") {
        return canRookAttack(c, d, e, f);
    } else if (black_fig == "слон") {
        return canBishopAttack(c, d, e, f);
    } else if (black_fig == "ферзь") {
        return canQueenAttack(c, d, e, f);
    } else if (black_fig == "конь") {
        return canKnightAttack(c, d, e, f);
    } else if (black_fig == "король") {
        return canKingAttack(c, d, e, f);
    }
    return false;
}

// Функция для решения одной подзадачи
void solve(const string& white_fig, const string& black_fig, int a, int b, int c, int d, int e, int f) {
    bool can_move = canWhiteMove(white_fig, a, b, e, f);
    bool is_attacked = isBlackAttacking(black_fig, c, d, e, f);
    
    cout << "Белая фигура: " << white_fig << ", Черная фигура: " << black_fig << endl;
    cout << "Белая фигура может пойти на (e,f): " << (can_move ? "Да" : "Нет") << endl;
    cout << "Поле (e,f) находится под ударом черной фигуры: " << (is_attacked ? "Да" : "Нет") << endl;
    cout << "Результат: Белая фигура может пойти на (e,f) не попав под удар черной фигуры: " << ((can_move && !is_attacked) ? "Да" : "Нет") << endl;
    cout << "---" << endl;
}

int main() {
    // Пример использования для подзадачи (а)
    // Предположим, что a=1, b=1, c=8, d=8, e=1, f=8
    int a = 1, b = 1, c = 8, d = 8, e = 1, f = 8;
    
    cout << "Координаты: a=" << a << ", b=" << b << ", c=" << c << ", d=" << d << ", e=" << e << ", f=" << f << endl;
    cout << "---" << endl;
    
    // Решение всех подзадач
    // (a) ладья и ладья
    solve("ладья", "ладья", a, b, c, d, e, f);
    // (б) ладья и ферзь
    solve("ладья", "ферзь", a, b, c, d, e, f);
    // (в) ладья и конь
    solve("ладья", "конь", a, b, c, d, e, f);
    // (г) ладья и слон
    solve("ладья", "слон", a, b, c, d, e, f);
    // (д) ферзь и ферзь
    solve("ферзь", "ферзь", a, b, c, d, e, f);
    // (е) ферзь и ладья
    solve("ферзь", "ладья", a, b, c, d, e, f);
    // (ж) ферзь и конь
    solve("ферзь", "конь", a, b, c, d, e, f);
    // (з) ферзь и слон
    solve("ферзь", "слон", a, b, c, d, e, f);
    // (и) конь и конь
    solve("конь", "конь", a, b, c, d, e, f);
    // (к) конь и ладья
    solve("конь", "ладья", a, b, c, d, e, f);
    // (л) конь и ферзь
    solve("конь", "ферзь", a, b, c, d, e, f);
    // (м) конь и слон
    solve("конь", "слон", a, b, c, d, e, f);
    // (н) слон и слон
    solve("слон", "слон", a, b, c, d, e, f);
    // (о) слон и ферзь
    solve("слон", "ферзь", a, b, c, d, e, f);
    // (п) слон и конь
    solve("слон", "конь", a, b, c, d, e, f);
    // (р) слон и ладья
    solve("слон", "ладья", a, b, c, d, e, f);
    // (с) король и слон
    solve("король", "слон", a, b, c, d, e, f);
    // (т) король и ферзь
    solve("король", "ферзь", a, b, c, d, e, f);
    // (у) король и конь
    solve("король", "конь", a, b, c, d, e, f);
    // (ф) король и ладья
    solve("король", "ладья", a, b, c, d, e, f);
    
    return 0;
}
