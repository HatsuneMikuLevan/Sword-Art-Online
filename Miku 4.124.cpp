

#include <iostream>
#include <string>

int main() {
    int mitya_age, vasya_age;
    std::cout << "Введите возраст Мити и Васи: ";
    std::cin >> mitya_age >> vasya_age;

    std::string result = (mitya_age > vasya_age) ? "Митя старше" : ((vasya_age > mitya_age) ? "Вася старше" : "Они одного возраста");
    std::cout << result << std::endl;

    return 0;
}
