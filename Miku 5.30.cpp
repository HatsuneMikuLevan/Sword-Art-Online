5.3

#include <iostream>

int main() {
    for (int i = 20; i <= 35; ++i) {
        std::cout << i << std::endl;
    }
    return 0;
}
#include <iostream>

int main() {
    int a;
    std::cout << "Введите число a (a <= 50): ";
    std::cin >> a;
    for (int i = a; i <= 50; ++i) {
        std::cout << i * i << std::endl;
    }
    return 0;
}
#include <iostream>

int main() {
    int b;
    std::cout << "Введите число b (b > 10): ";
    std::cin >> b;
    for (int i = 10; i <= b; ++i) {
        std::cout << i * i * i << std::endl;
    }
    return 0;
}
#include <iostream>

int main() {
    int a, b;
    std::cout << "Введите число a: ";
    std::cin >> a;
    std::cout << "Введите число b (b > a): ";
    std::cin >> b;
    for (int i = a; i <= b; ++i) {
        std::cout << i << std::endl;
    }
    return 0;
}
5.4

#include <iostream>
#include <iomanip>

int main() {
    for (int i = 10; i <= 25; ++i) {
        std::cout << i << " " << std::fixed << std::setprecision(1) << i + 0.4 << std::endl;
    }
    return 0;
}
#include <iostream>
#include <iomanip>

int main() {
    for (int i = 25; i <= 35; ++i) {
        std::cout << i << " " << std::fixed << std::setprecision(1) << i + 0.5 << " " << i - 0.2 << std::endl;
    }
    return 0;
}
5.5

#include <iostream>
#include <iomanip>

int main() {
    for (int i = 21; i >= 10; --i) {
        std::cout << i << " " << std::fixed << std::setprecision(1) << i - 1.8 << std::endl;
    }
    return 0;
}
#include <iostream>
#include <iomanip>

int main() {
    for (int i = 45; i >= 25; --i) {
        std::cout << i << " " << std::fixed << std::setprecision(1) << i - 0.5 << " " << i - 0.8 << std::endl;
    }
    return 0;
}
5.6

#include <iostream>
#include <iomanip>

int main() {
    for (int i = 21; i <= 35; ++i) {
        std::cout << i << " " << std::fixed << std::setprecision(1) << i - 0.6 << std::endl;
    }
    return 0;
}
#include <iostream>
#include <iomanip>

int main() {
    for (int i = 16; i <= 24; ++i) {
        std::cout << i << " " << std::fixed << std::setprecision(1) << i - 0.5 << " " << i + 0.8 << std::endl;
    }
    return 0;
}
5.7

#include <iostream>
#include <iomanip>

int main() {
    const double price = 20.4;
    std::cout << "Количество | Стоимость" << std::endl;
    std::cout << "----------------------" << std::endl;
    for (int i = 2; i <= 20; ++i) {
        std::cout << std::setw(10) << i << " | " << std::fixed << std::setprecision(2) << i * price << std::endl;
    }
    return 0;
}
5.8

#include <iostream>
#include <iomanip>

int main() {
    const double grams_in_pound = 453.0;
    std::cout << "Фунты | Кг" << std::endl;
    std::cout << "------------" << std::endl;
    for (int i = 1; i <= 10; ++i) {
        double kg = (i * grams_in_pound) / 1000.0;
        std::cout << std::setw(5) << i << " | " << std::fixed << std::setprecision(3) << kg << std::endl;
    }
    return 0;
}
5.9

#include <iostream>
#include <iomanip>

int main() {
    std::cout << "Дюймы\tСантиметры" << std::endl;
    for (int i = 10; i <= 22; ++i) {
        double cm = i * 2.54;
        std::cout << i << "\t" << std::fixed << std::setprecision(2) << cm << std::endl;
    }
    return 0;
}
5.10

#include <iostream>
#include <iomanip>

int main() {
    double exchangeRate;
    std::cout << "Введите текущий курс доллара к рублю: ";
    std::cin >> exchangeRate;
    std::cout << "Доллары\tРубли" << std::endl;
    for (int i = 1; i <= 20; ++i) {
        double rubles = i * exchangeRate;
        std::cout << i << "\t" << std::fixed << std::setprecision(2) << rubles << std::endl;
    }
    return 0;
}
5.11
#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    const double R = 6350.0;
    std::cout << "Высота (км)\tРасстояние до горизонта (км)" << std::endl;
    for (int h = 1; h <= 10; ++h) {
        double d = std::sqrt(2 * R * h + h * h);
        std::cout << h << "\t\t" << std::fixed << std::setprecision(2) << d << std::endl;
    }
    return 0;
}
5.12

#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    const double p0 = 1.29;
    const double epsilon = 1.25e-4;
    std::cout << "Высота (м)\tПлотность (кг/м^3)" << std::endl;
    for (int h = 0; h <= 1000; h += 100) {
        double p = p0 * std::exp(-h * epsilon);
        std::cout << h << "\t\t" << std::fixed << std::setprecision(4) << p << std::endl;
    }
    return 0;
}
5.13

#include <iostream>

int main() {
    for (int i = 1; i <= 9; ++i) {
        std::cout << i << " x 7 = " << i * 7 << std::endl;
    }
    return 0;
}
5.14

#include <iostream>

int main() {
    for (int i = 1; i <= 9; ++i) {
        std::cout << i << " x 9 = " << i * 9 << std::endl;
    }
    return 0;
}
5.15

#include <iostream>

int main() {
    int n;
    std::cout << "Введите число n (1-9): ";
    std::cin >> n;
    if (n >= 1 && n <= 9) {
        for (int i = 1; i <= 9; ++i) {
            std::cout << i << " x " << n << " = " << i * n << std::endl;
        }
    } else {
        std::cout << "Некорректный ввод. Число должно быть от 1 до 9." << std::endl;
    }
    return 0;
}
5.16

#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    for (int i = 2; i <= 15; ++i) {
        std::cout << "sin(" << i << ") = " << std::fixed << std::setprecision(4) << std::sin(i) << std::endl;
    }
    return 0;
}
5.17

#include <iostream>
#include <iomanip>

int main() {
    std::cout << "x\ty" << std::endl;
    for (int x = 4; x <= 28; ++x) {
        double t = x + 3;
        double y = 3 * t * t + 4.87 * t - 3;
        std::cout << x << "\t" << std::fixed << std::setprecision(2) << y << std::endl;
    }
    return 0;
}
5.18

#include <iostream>
#include <iomanip>

int main() {
    std::cout << "a\tz" << std::endl;
    for (int a = 2; a <= 17; ++a) {
        double t = 3.0 * a;
        double z = 4.3 * t * t - 8 * t + 13;
        std::cout << a << "\t" << std::fixed << std::setprecision(2) << z << std::endl;
    }
    return 0;
}
5.19

#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    std::cout << "x\tsin(x)" << std::endl;
    for (double x = 0.1; x <= 1.5; x += 0.1) {
        std::cout << std::fixed << std::setprecision(1) << x << "\t" << std::fixed << std::setprecision(4) << std::sin(x) << std::endl;
    }
    return 0;
}
5.20

#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    std::cout << "x\tsqrt(x)" << std::endl;
    for (double x = 0.1; x <= 0.9; x += 0.1) {
        std::cout << std::fixed << std::setprecision(1) << x << "\t" << std::fixed << std::setprecision(4) << std::sqrt(x) << std::endl;
    }
    return 0;
}
5.21

#include <iostream>
#include <iomanip>

int main() {
    double pricePerKg;
    std::cout << "Введите стоимость 1 кг сыра: ";
    std::cin >> pricePerKg;
    std::cout << "Масса (г)\tСтоимость (руб)" << std::endl;
    for (int mass = 50; mass <= 1000; mass += 50) {
        double cost = (static_cast<double>(mass) / 1000.0) * pricePerKg;
        std::cout << mass << "\t\t" << std::fixed << std::setprecision(2) << cost << std::endl;
    }
    return 0;
}
5.22

#include <iostream>
#include <iomanip>

int main() {
    double pricePerKg;
    std::cout << "Введите стоимость 1 кг конфет: ";
    std::cin >> pricePerKg;
    std::cout << "Масса (г)\tСтоимость (руб)" << std::endl;
    for (int mass = 100; mass <= 2000; mass += 100) {
        double cost = (static_cast<double>(mass) / 1000.0) * pricePerKg;
        std::cout << mass << "\t\t" << std::fixed << std::setprecision(2) << cost << std::endl;
    }
    return 0;
}
5.23

#include <iostream>
#include <iomanip>

int main() {
    for (double i = 2.1; i <= 2.8; i += 0.1) {
        std::cout << std::fixed << std::setprecision(1) << i << std::endl;
    }
    return 0;
}
5.24

#include <iostream>
#include <iomanip>

int main() {
    for (double i = 3.2; i <= 3.9; i += 0.1) {
        std::cout << std::fixed << std::setprecision(1) << i << std::endl;
    }
    return 0;
}
5.25

#include <iostream>
#include <iomanip>

int main() {
    for (double i = 2.2; i <= 4.2; i += 0.2) {
        std::cout << std::fixed << std::setprecision(1) << i << std::endl;
    }
    return 0;
}
5.26

#include <iostream>
#include <iomanip>

int main() {
    for (double i = 4.4; i <= 6.4; i += 0.2) {
        std::cout << std::fixed << std::setprecision(1) << i << std::endl;
    }
    return 0;
}
5.27

#include <iostream>

long long sumRange(int start, int end) {
    long long sum = 0;
    for (int i = start; i <= end; ++i) {
        sum += i;
    }
    return sum;
}

int main() {
    // а) сумму всех целых чисел от 200 до 600
    std::cout << "a) Сумма от 200 до 600: " << sumRange(200, 600) << std::endl;

    // б) сумму всех целых чисел от а до 400 (a <= 400)
    int a;
    std::cout << "б) Введите значение a (a <= 400): ";
    std::cin >> a;
    if (a <= 400) {
        std::cout << "Сумма от " << a << " до 400: " << sumRange(a, 400) << std::endl;
    } else {
        std::cout << "Некорректный ввод: a должно быть меньше или равно 400." << std::endl;
    }

    // в) сумму всех целых чисел от -15 до b (b > -15)
    int b;
    std::cout << "в) Введите значение b (b > -15): ";
    std::cin >> b;
    if (b > -15) {
        std::cout << "Сумма от -15 до " << b << ": " << sumRange(-15, b) << std::endl;
    } else {
        std::cout << "Некорректный ввод: b должно быть больше -15." << std::endl;
    }

    // г) сумму всех целых чисел от а до b (b > a)
    int a2, b2;
    std::cout << "г) Введите значения a и b (b > a): ";
    std::cin >> a2 >> b2;
    if (b2 > a2) {
        std::cout << "Сумма от " << a2 << " до " << b2 << ": " << sumRange(a2, b2) << std::endl;
    } else {
        std::cout << "Некорректный ввод: b должно быть больше a." << std::endl;
    }

    return 0;
}
5.28

#include <iostream>

long long productRange(int start, int end) {
    long long product = 1;
    for (int i = start; i <= end; ++i) {
        product *= i;
    }
    return product;
}

int main() {
    // а) произведение всех целых чисел от 7 до 14
    std::cout << "а) Произведение от 7 до 14: " << productRange(7, 14) << std::endl;

    // б) произведение всех целых чисел от а до 15 (1 < a < 15)
    int a;
    std::cout << "б) Введите значение a (1 < a < 15): ";
    std::cin >> a;
    if (a > 1 && a < 15) {
        std::cout << "Произведение от " << a << " до 15: " << productRange(a, 15) << std::endl;
    } else {
        std::cout << "Некорректный ввод: a должно быть в диапазоне (1, 15)." << std::endl;
    }

    // в) произведение всех целых чисел от 1 до b (1 < b <= 10)
    int b;
    std::cout << "в) Введите значение b (1 < b <= 10): ";
    std::cin >> b;
    if (b > 1 && b <= 10) {
        std::cout << "Произведение от 1 до " << b << ": " << productRange(1, b) << std::endl;
    } else {
        std::cout << "Некорректный ввод: b должно быть в диапазоне (1, 10]." << std::endl;
    }

    // г) произведение всех целых чисел от а до b (b > a)
    int a2, b2;
    std::cout << "г) Введите значения a и b (b > a): ";
    std::cin >> a2 >> b2;
    if (b2 > a2) {
        std::cout << "Произведение от " << a2 << " до " << b2 << ": " << productRange(a2, b2) << std::endl;
    } else {
        std::cout << "Некорректный ввод: b должно быть больше a." << std::endl;
    }

    return 0;
}
5.29

#include <iostream>

int main() {
    long long sum = 0;
    int count = 0;
    for (int i = 1; i <= 750; ++i) {
        sum += i;
        count++;
    }
    double average = static_cast<double>(sum) / count;
    std::cout << "Среднее арифметическое: " << average << std::endl;
    return 0;
}
#include <iostream>

int main() {
    int b;
    std::cout << "Введите значение b (b > 150): ";
    std::cin >> b;

    if (b > 150) {
        long long sum = 0;
        int count = 0;
        for (int i = 150; i <= b; ++i) {
            sum += i;
            count++;
        }
        double average = static_cast<double>(sum) / count;
        std::cout << "Среднее арифметическое: " << average << std::endl;
    } else {
        std::cout << "Ошибка: b должно быть больше 150." << std::endl;
    }
    return 0;
}
#include <iostream>

int main() {
    int a;
    std::cout << "Введите значение a (a <= 200): ";
    std::cin >> a;

    if (a <= 200) {
        long long sum = 0;
        int count = 0;
        for (int i = a; i <= 200; ++i) {
            sum += i;
            count++;
        }
        double average = static_cast<double>(sum) / count;
        std::cout << "Среднее арифметическое: " << average << std::endl;
    } else {
        std::cout << "Ошибка: a должно быть меньше или равно 200." << std::endl;
    }
    return 0;
}
#include <iostream>

int main() {
    int a, b;
    std::cout << "Введите значение a: ";
    std::cin >> a;
    std::cout << "Введите значение b (b > a): ";
    std::cin >> b;

    if (b > a) {
        long long sum = 0;
        int count = 0;
        for (int i = a; i <= b; ++i) {
            sum += i;
            count++;
        }
        double average = static_cast<double>(sum) / count;
        std::cout << "Среднее арифметическое: " << average << std::endl;
    } else {
        std::cout << "Ошибка: b должно быть больше a." << std::endl;
    }
    return 0;
}
5.30

#include <iostream>
#include <cmath>

int main() {
    long long sum_of_cubes = 0;
    for (int i = 25; i <= 40; ++i) {
        sum_of_cubes += pow(i, 3);
    }
    std::cout << "Сумма кубов: " << sum_of_cubes << std::endl;
    return 0;
}
#include <iostream>
#include <cmath>

int main() {
    int a;
    std::cout << "Введите значение a (0 < a < 50): ";
    std::cin >> a;

    if (a > 0 && a < 50) {
        long long sum_of_squares = 0;
        for (int i = a; i <= 50; ++i) {
            sum_of_squares += pow(i, 2);
        }
        std::cout << "Сумма квадратов: " << sum_of_squares << std::endl;
    } else {
        std::cout << "Ошибка: a должно быть в диапазоне от 1 до 49." << std::endl;
    }
    return 0;
}
#include <iostream>
#include <cmath>

int main() {
    int n;
    std::cout << "Введите значение n (1 <= n <= 100): ";
    std::cin >> n;

    if (n >= 1 && n <= 100) {
        long long sum_of_squares = 0;
        for (int i = 1; i <= n; ++i) {
            sum_of_squares += pow(i, 2);
        }
        std::cout << "Сумма квадратов: " << sum_of_squares << std::endl;
    } else {
        std::cout << "Ошибка: n должно быть в диапазоне от 1 до 100." << std::endl;
    }
    return 0;
}
#include <iostream>
#include <cmath>

int main() {
    int a, b;
    std::cout << "Введите значение a: ";
    std::cin >> a;
    std::cout << "Введите значение b (b > a): ";
    std::cin >> b;

    if (b > a) {
        long long sum_of_squares = 0;
        for (int i = a; i <= b; ++i) {
            sum_of_squares += pow(i, 2);
        }
        std::cout << "Сумма квадратов: " << sum_of_squares << std::endl;
    } else {
        std::cout << "Ошибка: b должно быть больше a." << std::endl;
    }
    return 0;
}
