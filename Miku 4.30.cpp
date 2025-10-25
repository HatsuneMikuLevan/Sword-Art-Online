#include
void solve_4_30(int n) {
int d1 = n / 100;
int d3 = n % 10;
std::cout << (d1 == d3 ? "Да" : "Нет") << std::endl;
}

int main() {
int n;
std::cout << "Введите трехзначное число: ";
std::cin >> n;
solve_4_30(n);
return 0;
}
