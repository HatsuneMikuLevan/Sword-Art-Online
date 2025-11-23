

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

void solve_10_10() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    auto play_game = []() -> bool {
        int user_choice;
        std::cout << "Чет (введите 2) или нечет (введите 1)? ";
        std::cin >> user_choice;

        int computer_choice = (std::rand() % 2) + 1; // 1 или 2

        std::cout << "Компьютер выбрал: " << computer_choice << std::endl;

        if (user_choice == computer_choice) {
            std::cout << "Вы выиграли!" << std::endl;
            return true;
        } else {
            std::cout << "Вы проиграли!" << std::endl;
            return false;
        }
    };

    // а) Однократное угадывание
    std::cout << "--- 10.10 а) Однократное угадывание ---" << std::endl;
    play_game();

    // б) Угадывание n раз
    std::cout << "--- 10.10 б) Угадывание n раз ---" << std::endl;
    int n;
    std::cout << "Сколько раз играть? ";
    std::cin >> n;
    int user_wins = 0;
    for (int i = 0; i < n; ++i) {
        if (play_game()) {
            user_wins++;
        }
    }
    std::cout << "Счет " << user_wins << ":" << n - user_wins << " в вашу пользу." << (user_wins > n - user_wins ? " Вы выиграли!" : " Вы проиграли!") << std::endl;

    // в) Угадывание до отказа
    std::cout << "--- 10.10 в) Угадывание до отказа ---" << std::endl;
    std::string continue_choice;
    int correct_answers = 0;
    int incorrect_answers = 0;
    do {
        if (play_game()) {
            correct_answers++;
        } else {
            incorrect_answers++;
        }
        std::cout << "Продолжить еще раз? (Да/Нет): ";
        std::cin >> continue_choice;
    } while (continue_choice == "Да" || continue_choice == "да");
    std::cout << "Количество верных ответов: " << correct_answers << ", неверных: " << incorrect_answers << std::endl;
}
