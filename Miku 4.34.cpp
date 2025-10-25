#include
void solve_4_34(int n) {
int d1 = n / 100;
int d2 = (n / 10) % 10;
int d3 = n % 10;
std::cout << "а) " << (d1 == d2 && d2 == d3 ? "Да" : "Нет") << std::endl;
std::cout << "б) " << (d1 == d2 || d2 == d3 || d1 == d3 ? "Да" : "Нет") << std::endl;
}

int main() {
int n;
std::cout << "Введите трехзначное число: ";
std::cin >> n;
solve_4_34(n);
return 0;
}
