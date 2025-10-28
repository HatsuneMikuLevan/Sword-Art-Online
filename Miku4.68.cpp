#include
int main() {
int n;
std::cout << "Введите номер года: ";
std::cin >> n;

bool is_leap = (n % 4 == 0 && n % 100 != 0) || (n % 400 == 0);

if (is_leap) {
std::cout << "Год является високосным." << std::endl;
} else {
std::cout << "Год не является високосным." << std::endl;
}

return 0;
}
