#include
int main() {
int n;
std::cout << "Введите четырехзначное число: ";
std::cin >> n;

int digit1 = n / 1000;
int digit2 = (n / 100) % 10;
int digit3 = (n / 10) % 10;
int digit4 = n % 10;

// Проверка на 2 или 7
bool has_2_or_7 = (digit1 == 2 || digit1 == 7 || digit2 == 2 || digit2 == 7 || digit3 == 2 || digit3 == 7 || digit4 == 2 || digit4 == 7);
std::cout << "а) Входят ли в него цифры 2 или 7? " << (has_2_or_7 ? "Да" : "Нет") << std::endl;

// Проверка на 3, 6 или 9
bool has_3_6_or_9 = (digit1 == 3 || digit1 == 6 || digit1 == 9 || digit2 == 3 || digit2 == 6 || digit2 == 9 || digit3 == 3 || digit3 == 6 || digit3 == 9 || digit4 == 3 || digit4 == 6 || digit4 == 9);
std::cout << "б) Входят ли в него цифры 3, 6 или 9? " << (has_3_6_or_9 ? "Да" : "Нет") << std::endl;

return 0;
}

