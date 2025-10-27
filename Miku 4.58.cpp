#include
void solve458(double a, double b, double c) {
bool result = (a == b) || (a == c) || (b == c);
if (result) {
std::cout << "Среди чисел " << a << ", " << b << ", " << c << " есть хотя бы одна пара равных." << std::endl;
} else {
std::cout << "Среди чисел " << a << ", " << b << ", " << c << " нет равных пар." << std::endl;
}
}
