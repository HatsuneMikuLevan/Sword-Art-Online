#include
void solve_4_33(int n, int a) {
int d1 = n / 100;
int d2 = (n / 10) % 10;
int d3 = n % 10;
int sum_digits = d1 + d2 + d3;
int prod_digits = d1 * d2 * d3;
std::cout << "а) " << (sum_digits >= 10 && sum_digits <= 99 ? "Да" : "Нет") << std::endl;
std::cout << "б) " << (prod_digits >= 100 && prod_digits <= 999 ? "Да" : "Нет") << std::endl;
std::cout << "в) " << (prod_digits > a ? "Да" : "Нет") << std::endl;
std::cout << "г) " << (sum_digits % 5 == 0 ? "Да" : "Нет") << std::endl;
std::cout << "д) " << (sum_digits % a == 0 ? "Да" : "Нет") << std::endl;
}

int main() {
int n, a;
std::cout << "Введите трехзначное число: ";
std::cin >> n;
std::cout << "Введите число а: ";
std::cin >> a;
solve_4_33(n, a);
return 0;
}
