#include
void solve_4_35(int n) {
int d1 = n / 1000;
int d2 = (n / 100) % 10;
int d3 = (n / 10) % 10;
int d4 = n % 10;
int sum_first_two = d1 + d2;
int sum_last_two = d3 + d4;
int sum_all = d1 + d2 + d3 + d4;
int prod_all = d1 * d2 * d3 * d4;
std::cout << "а) " << (sum_first_two == sum_last_two ? "Да" : "Нет") << std::endl;
std::cout << "б) " << (sum_all % 3 == 0 ? "Да" : "Нет") << std::endl;
std::cout << "в) " << (prod_all % 4 == 0 ? "Да" : "Нет") << std::endl;
}

int main() {
int n;
std::cout << "Введите четырехзначное число: ";
std::cin >> n;
solve_4_35(n);
return 0;
}
