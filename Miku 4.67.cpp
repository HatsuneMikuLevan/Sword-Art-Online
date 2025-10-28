#include
int sum_digits(int n) {
int sum = 0;
while (n > 0) {
sum += n % 10;
n /= 10;
}
return sum;
}

int main() {
int n;
std::cout << "Введите шестизначное число: ";
std::cin >> n;

if (n < 100000 || n > 999999) {
std::cout << "Ошибка: число не является шестизначным." << std::endl;
return 1;
}

int first_three = n / 1000;
int last_three = n % 1000;

if (sum_digits(first_three) == sum_digits(last_three)) {
std::cout << "Число является счастливым." << std::endl;
} else {
std::cout << "Число не является счастливым." << std::endl;
}

return 0;
}
