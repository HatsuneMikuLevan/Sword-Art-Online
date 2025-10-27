#include #include
void solve461(double a, double b, double c) {
double discriminant = b * b - 4 * a * c;
if (discriminant > 0) {
double root1 = (-b + sqrt(discriminant)) / (2 * a);
double root2 = (-b - sqrt(discriminant)) / (2 * a);
std::cout << "Уравнение имеет два различных корня: " << root1 << " и " << root2 << std::endl;
} else if (discriminant == 0) {
double root = -b / (2 * a);
std::cout << "Уравнение имеет один корень (два равных): " << root << std::endl;
} else {
std::cout << "Уравнение не имеет вещественных корней." << std::endl;
}
}
