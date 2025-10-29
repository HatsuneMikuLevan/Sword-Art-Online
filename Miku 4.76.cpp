#include #include
using namespace std;

// Функция для проверки угрозы ладьи
bool isRookThreatening(int a, int b, int c, int d) {
return (a == c) || (b == d);
}

// Функция для проверки угрозы слона
bool isBishopThreatening(int a, int b, int c, int d) {
return abs(a - c) == abs(b - d);
}

// Функция для проверки хода короля
bool canKingMove(int a, int b, int c, int d) {
return (abs(a - c) <= 1) && (abs(b - d) <= 1);
}

// Функция для проверки угрозы ферзя
bool isQueenThreatening(int a, int b, int c, int d) {
return isRookThreatening(a, b, c, d) || isBishopThreatening(a, b, c, d);
}

// Функция для проверки хода белой пешки
bool canWhitePawnMove(int a, int b, int c, int d, bool isCapturing) {
if (isCapturing) {
return (abs(a - c) == 1) && (d == b + 1);
} else {
return (a == c) && (d == b + 1);
}
}

// Функция для проверки хода черной пешки
bool canBlackPawnMove(int a, int b, int c, int d, bool isCapturing) {
if (isCapturing) {
return (abs(a - c) == 1) && (d == b - 1);
} else {
return (a == c) && (d == b - 1);
}
}

// Функция для проверки угрозы коня
bool isKnightThreatening(int a, int b, int c, int d) {
return (abs(a - c) == 1 && abs(b - d) == 2) || (abs(a - c) == 2 && abs(b - d) == 1);
}

int main() {

int a = 4, b = 4, c = 4, d = 8;
cout << "Ладья на (" << a << ", " << b << ") угрожает полю (" << c << ", " << d << ")? " << (isRookThreatening(a, b, c, d) ? "Да" : "Нет") << endl;

a = 4, b = 4, c = 6, d = 6;
cout << "Слон на (" << a << ", " << b << ") угрожает полю (" << c << ", " << d << ")? " << (isBishopThreatening(a, b, c, d) ? "Да" : "Нет") << endl;

a = 4, b = 4, c = 5, d = 5;
cout << "Король на (" << a << ", " << b << ") может попасть на поле (" << c << ", " << d << ")? " << (canKingMove(a, b, c, d) ? "Да" : "Нет") << endl;

a = 4, b = 4, c = 4, d = 8;
cout << "Ферзь на (" << a << ", " << b << ") угрожает полю (" << c << ", " << d << ")? " << (isQueenThreatening(a, b, c, d) ? "Да" : "Нет") << endl;

a = 4, b = 4, c = 5, d = 5;
cout << "Белая пешка на (" << a << ", " << b << ") может побить фигуру на (" << c << ", " << d << ")? " << (canWhitePawnMove(a, b, c, d, true) ? "Да" : "Нет") << endl;

a = 4, b = 4, c = 3, d = 3;
cout << "Черная пешка на (" << a << ", " << b << ") может побить фигуру на (" << c << ", " << d << ")? " << (canBlackPawnMove(a, b, c, d, true) ? "Да" : "Нет") << endl;

a = 4, b = 4, c = 5, d = 6;
cout << "Конь на (" << a << ", " << b << ") угрожает полю (" << c << ", " << d << ")? " << (isKnightThreatening(a, b, c, d) ? "Да" : "Нет") << endl;

return 0;
}
