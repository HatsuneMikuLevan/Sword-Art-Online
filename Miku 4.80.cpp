#include #include
void solve_4_80(double a, double b, double c) {
if (a + b > c && a + c > b && b + c > a) {
const double epsilon = 1e-9;
if (std::abs(a*a + b*b - c*c) < epsilon ||
std::abs(a*a + c*c - b*b) < epsilon ||
std::abs(b*b + c*c - a*a) < epsilon) {
std::cout << "Треугольник является прямоугольным." << std::endl;
} else {
std::cout << "Треугольник не является прямоугольным." << std::endl;
}
} else {
std::cout << "Треугольник не существует." << std::endl;
}
}
