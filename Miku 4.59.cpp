#include
void solve459(double a, double b, double c) {
if (a == b && b == c) {
std::cout << "Треугольник равносторонний." << std::endl;
} else if (a == b || a == c || b == c) {
std::cout << "Треугольник равнобедренный." << std::endl;
} else {
std::cout << "Треугольник не является ни равносторонним, ни равнобедренным." << std::endl;
}
}
