#include
int main() {
double a, b, c, d;
std::cout << "Введите стороны первого прямоугольника (a, b): ";
std::cin >> a >> b;
std::cout << "Введите стороны второго прямоугольника (c, d): ";
std::cin >> c >> d;

bool can_fit = (a <= c && b <= d) || (a <= d && b <= c);

if (can_fit) {
std::cout << "Прямоугольник можно уместить." << std::endl;
} else {
std::cout << "Прямоугольник нельзя уместить." << std::endl;
}

return 0;
}
