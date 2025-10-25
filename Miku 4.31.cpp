#include
void solve_4_31(int n) {
int d1 = n / 100;
int d2 = (n / 10) % 10;
int d3 = n % 10;
std::cout << "а) ";
if (d1 > d3) {
std::cout << "Первая" << std::endl;
} else if (d3 > d1) {
std::cout << "Последняя" << std::endl;
} else {
std::cout << "Равны" << std::endl;
}
std::cout << "б) ";
if (d1 > d2) {
std::cout << "Первая" << std::endl;
} else if (d2 > d1) {
std::cout << "Вторая" << std::endl;
} else {
std::cout << "Равны" << std::endl;
}
std::cout << "в) ";
if (d2 > d3) {
std::cout << "Вторая" << std::endl;
} else if (d3 > d2) {
std::cout << "Последняя" << std::endl;
} else {
std::cout << "Равны" << std::endl;
}
}

int main() {
int n;
std::cout << "Введите трехзначное число: ";
std::cin >> n;
solve_4_31(n);
return 0;
}
