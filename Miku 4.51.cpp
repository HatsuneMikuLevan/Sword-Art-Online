#include
int main() {
int n;
std::cout << "Введите трехзначное число: ";
std::cin >> n;

int digit1 = n / 100;
int digit2 = (n / 10) % 10;
int digit3 = n % 10;

// Проверка на цифру 6
bool has_6 = (digit1 == 6 || digit2 == 6 || digit3 == 6);
std::cout << "а) Входит ли в него цифра 6? " << (has_6 ? "Да" : "Нет") << std::endl;

// Проверка на цифру n
int check_digit;
std::cout << "Введите цифру n для проверки: ";
std::cin >> check_digit;
bool has_n = (digit1 == check_digit || digit2 == check_digit || digit3 == check_digit);
std::cout << "б) Входит ли в него цифра " << check_digit << "? " << (has_n ? "Да" : "Нет") << std::endl;

return 0;
}
