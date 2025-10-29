#include
void solve_4_79(double a, double b, double c) {
if (a + b > c && a + c > b && b + c > a) {
std::cout << "Треугольник со сторонами " << a << ", " << b << ", " << c << " существует." << std::endl;
} else {
std::cout << "Треугольник со сторонами " << a << ", " << b << ", " << c << " не существует." << std::endl;
}
}
