#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double age_tanya, age_mitya;

    std::cout << "Введите возраст Тани: ";
    std::cin >> age_tanya;
    std::cout << "Введите возраст Мити: ";
    std::cin >> age_mitya;

    double average_age = (age_tanya + age_mitya) / 2.0;
    double deviation_tanya = std::abs(age_tanya - average_age);
    double deviation_mitya = std::abs(age_mitya - average_age);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Средний возраст: " << average_age << std::endl;
    std::cout << "Отклонение возраста Тани от среднего: " << deviation_tanya << std::endl;
    std::cout << "Отклонение возраста Мити от среднего: " << deviation_mitya << std::endl;

    return 0;
}
