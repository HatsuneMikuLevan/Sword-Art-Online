#include
int main() {
double a, b, c, x, y;
std::cout << "Введите ребра кирпича (a, b, c): ";
std::cin >> a >> b >> c;
std::cout << "Введите стороны отверстия (x, y): ";
std::cin >> x >> y;

bool can_fit = (a <= x && b <= y) || (a <= y && b <= x) ||
(a <= x && c <= y) || (a <= y && c <= x) ||
(b <= x && c <= y) || (b <= y && c <= x);

if (can_fit) {
std::cout << "Кирпич пройдет через отверстие." << std::endl;
} else {
std::cout << "Кирпич не пройдет через отверстие." << std::endl;
}

return 0;
}
