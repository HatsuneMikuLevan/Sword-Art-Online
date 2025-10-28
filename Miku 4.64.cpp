#include
int main() {
double a, b, d;
std::cout << "Введите размеры форточки (a, b): ";
std::cin >> a >> b;
std::cout << "Введите диаметр головы Васи (d): ";
std::cin >> d;

bool can_fit = (d <= a - 2) && (d <= b - 2);

if (can_fit) {
std::cout << "Вася сможет просунуть голову." << std::endl;
} else {
std::cout << "Вася не сможет просунуть голову." << std::endl;
}

return 0;
}
