#include
int main() {
int n;
std::cout << "Введите трехзначное число: ";
std::cin >> n;

int digit1 = n / 100;
int digit2 = (n / 10) % 10;
int digit3 = n % 10;

bool has_6 = (digit1 == 6 || digit2 == 6 || digit3 == 6);
std::cout << "Входит ли в него цифра 6? " << (has_6 ? "Да" : "Нет") << std::endl;

return 0;
}
