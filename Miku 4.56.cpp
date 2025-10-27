#include
int main() {
int n;
std::cout << "Введите четырехзначное число: ";
std::cin >> n;

int digit1 = n / 1000;
int digit2 = (n / 100) % 10;
int digit3 = (n / 10) % 10;
int digit4 = n % 10;

bool is_symmetric = (digit1 == digit4 && digit2 == digit3);
std::cout << "Запись числа " << (is_symmetric ? "является симметричной" : "не является симметричной") << std::endl;

return 0;
}
