#include
void solve_4_28(int n, int a) {
int d1 = n / 10;
int d2 = n % 10;
int sum_digits = d1 + d2;
std::cout << "а) " << (sum_digits >= 10 && sum_digits <= 99 ? "Да" : "Нет") << std::endl;
std::cout << "б) " << (sum_digits > a ? "Да" : "Нет") << std::endl;
}

int main() {
int n, a;
std::cout << "Введите двузначное число: ";
std::cin >> n;
std::cout << "Введите число а: ";
std::cin >> a;
solve_4_28(n, a);
return 0;
}
