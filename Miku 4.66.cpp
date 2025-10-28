#include 
int main() {
double a1, a2, a3, b1, b2, b3;
std::cout << "Введите размеры чемодана (a1, a2, a3): ";
std::cin >> a1 >> a2 >> a3;
std::cout << "Введите размеры коробки (b1, b2, b3): ";
std::cin >> b1 >> b2 >> b3;

std::vector a = {a1, a2, a3};
std::vector b = {b1, b2, b3};

std::sort(a.begin(), a.end());
std::sort(b.begin(), b.end());

bool can_fit = (b[0] <= a[0]) && (b[1] <= a[1]) && (b[2] <= a[2]);

if (can_fit) {
std::cout << "Пассажир сможет сэкономить на оплате." << std::endl;
} else {
std::cout << "Пассажир не сможет сэкономить на оплате." << std::endl;
}

return 0;
}
