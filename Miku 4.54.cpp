#include
int main() {
int n;
std::cout << "Введите четырехзначное число: ";
std::cin >> n;

int digit1 = n / 1000;
int digit2 = (n / 100) % 10;
int digit3 = (n / 10) % 10;
int digit4 = n % 10;

// Проверка на цифру 4
bool has_4 = (digit1 == 4 || digit2 == 4 || digit3 == 4 || digit4 == 4);
std::cout << "а) Входит ли в него цифра 4? " << (has_4 ? "Да" : "Нет") << std::endl;

// Проверка на цифру b
int check_digit;
std::cout << "Введите цифру b для проверки: ";
std::cin >> check_digit;
bool has_b = (digit1 == check_digit || digit2 == check_digit || digit3 == check_digit || digit4 == check_digit);
std::cout << "б) Входит ли в него цифра " << check_digit << "? " << (has_b ? "Да" : "Нет") << std::endl;

return 0;
}
