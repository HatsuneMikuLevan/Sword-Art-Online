#include
int main() {
int n;
std::cout << "Введите трехзначное число: ";
std::cin >> n;

int digit1 = n / 100;
int digit2 = (n / 10) % 10;
int digit3 = n % 10;

// Проверка на 4 или 7
bool has_4_or_7 = (digit1 == 4 || digit1 == 7 || digit2 == 4 || digit2 == 7 || digit3 == 4 || digit3 == 7);
std::cout << "а) Входят ли в него цифры 4 или 7? " << (has_4_or_7 ? "Да" : "Нет") << std::endl;

// Проверка на 3, 6 или 9
bool has_3_6_or_9 = (digit1 == 3 || digit1 == 6 || digit1 == 9 || digit2 == 3 || digit2 == 6 || digit2 == 9 || digit3 == 3 || digit3 == 6 || digit3 == 9);
std::cout << "б) Входят ли в него цифры 3, 6 или 9? " << (has_3_6_or_9 ? "Да" : "Нет") << std::endl;

return 0;
}
