

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));
    int num1 = rand() % 9 + 1;
    int num2 = rand() % 9 + 1;
    int answer;

    std::cout << "Чему равно произведение " << num1 << "*" << num2 << "? ";
    std::cin >> answer;

    if (answer == num1 * num2) {
        std::cout << "Ответ правильный!" << std::endl;
    } else {
        std::cout << "Ответ неправильный." << std::endl;
    }

    return 0;
}
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));
    int correct_answers = 0;
    int incorrect_answers = 0;

    for (int i = 0; i < 20; ++i) {
        int num1 = rand() % 9 + 1;
        int num2 = rand() % 9 + 1;
        int answer;
        std::cout << "Чему равно произведение " << num1 << "*" << num2 << "? ";
        std::cin >> answer;

        if (answer == num1 * num2) {
            std::cout << "Правильно!" << std::endl;
            correct_answers++;
        } else {
            std::cout << "Неправильно!" << std::endl;
            incorrect_answers++;
        }
    }

    std::cout << "Всего правильных ответов: " << correct_answers << std::endl;
    std::cout << "Всего неправильных ответов: " << incorrect_answers << std::endl;

    return 0;
}
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));
    int answer = -1;

    while (answer != 0) {
        int num1 = rand() % 9 + 1;
        int num2 = rand() % 9 + 1;
        std::cout << "Чему равно произведение " << num1 << "*" << num2 << "? (Введите 0 для выхода) ";
        std::cin >> answer;

        if (answer != 0) {
            if (answer == num1 * num2) {
                std::cout << "Правильно!" << std::endl;
            } else {
                std::cout << "Неправильно!" << std::endl;
            }
        }
    }

    std::cout << "Выход из программы." << std::endl;

    return 0;
}
