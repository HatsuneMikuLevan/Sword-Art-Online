#include
void solve457(int a, int b, int c, int d) {
bool result = (a % b == c) || (a % b == d);
if (result) {
std::cout << "Остаток от деления числа " << a << " на " << b << " равен " << c << " или " << d << std::endl;
} else {
std::cout << "Остаток от деления числа " << a << " на " << b << " не равен " << c << " или " << d << std::endl;
}
}
