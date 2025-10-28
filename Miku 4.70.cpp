#include
int main() {
int k;
std::cout << "Введите номер дня (1-365): ";
std::cin >> k;

int day_of_week = (k - 1) % 7;

if (day_of_week == 5 || day_of_week == 6) {
std::cout << k << "-й день года является выходным." << std::endl;
} else {
std::cout << k << "-й день года является рабочим." << std::endl;
}

return 0;
}
