#include #include
void solve_4_32(int n) {
int d1 = n / 100;
int d2 = (n / 10) % 10;
int d3 = n % 10;
long long square_n = static_cast(n) * n;
long long sum_cubes = pow(d1, 3) + pow(d2, 3) + pow(d3, 3);
std::cout << (square_n == sum_cubes ? "Да" : "Нет") << std::endl;
}

int main() {
int n;
std::cout << "Введите трехзначное число: ";
std::cin >> n;
solve_4_32(n);
return 0;
}
