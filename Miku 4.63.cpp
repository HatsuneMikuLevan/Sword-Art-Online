#include
int main() {
double a, b, c, d;
std::cout << "Введите внутренние размеры конверта (a, b): ";
std::cin >> a >> b;
std::cout << "Введите размеры открытки (c, d): ";
std::cin >> c >> d;

bool can_fit = (c <= a - 2 && d <= b - 2) || (c <= b - 2 && d <= a - 2);

if (can_fit) {
std::cout << "Открытка войдет в конверт." << std::endl;
} else {
std::cout << "Открытка не войдет в конверт." << std::endl;
}

return 0;
}
