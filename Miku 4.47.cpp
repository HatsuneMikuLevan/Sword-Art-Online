#include
int main() {
double a, b, c;
std::cout << "Введите три вещественных числа a, b, c: ";
std::cin >> a >> b >> c;

// Проверка a < b < c
bool condition_a = (a < b && b < c);
std::cout << "а) Неравенство a < b < c " << (condition_a ? "выполняется" : "не выполняется") << std::endl;

// Проверка b > a > c
bool condition_b = (b > a && a > c);
std::cout << "б) Неравенство b > a > c " << (condition_b ? "выполняется" : "не выполняется") << std::endl;

return 0;
}
