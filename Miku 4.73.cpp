#include
int main() {
// Дано:
// a1 - цифра единиц двузначного числа
// a2 - цифра десятков двузначного числа
// b - однозначное число
int a1, a2, b;
std::cout << "Введите цифру единиц двузначного числа (a1): ";
std::cin >> a1;
std::cout << "Введите цифру десятков двузначного числа (a2): ";
std::cin >> a2;
std::cout << "Введите однозначное число (b): ";
std::cin >> b;

// Составление двузначного числа
int number1 = a2 * 10 + a1;

// Вычисление разности
int difference = number1 - b;

// Получение цифр разности
int diff_tens = difference / 10;
int diff_units = difference % 10;

std::cout << "Разность: " << difference << std::endl;
std::cout << "Цифра десятков разности: " << diff_tens << std::endl;
std::cout << "Цифра единиц разности: " << diff_units << std::endl;

return 0;
}
