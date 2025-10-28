#include
int main() {
double v0, alpha_deg, R, H;
const double g = 9.8;

std::cout << "Введите начальную скорость v0 (м/с): ";
std::cin >> v0;
std::cout << "Введите угол alpha (градусы): ";
std::cin >> alpha_deg;
std::cout << "Введите расстояние до цели R (м): ";
std::cin >> R;
std::cout << "Введите высоту цели H (м): ";
std::cin >> H;

double alpha_rad = alpha_deg * M_PI / 180.0;

double t = R / (v0 * cos(alpha_rad));

double y_at_R = v0 * t * sin(alpha_rad) - 0.5 * g * t * t;

if (std::abs(y_at_R - H) < 1e-6) {
std::cout << "Снаряд поразит цель." << std::endl;
} else {
std::cout << "Снаряд не поразит цель." << std::endl;
}

return 0;
}
