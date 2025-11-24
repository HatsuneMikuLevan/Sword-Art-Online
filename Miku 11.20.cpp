

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));
    std::vector<int> userAnswers(20);
    int correctCount = 0;
    for (int i = 0; i < 20; ++i) {
        int a = rand() % 8 + 2; // Числа от 2 до 9
        int b = rand() % 8 + 2;
        std::cout << "Чему равно произведение " << a << " на " << b << "? ";
        int answer;
        std::cin >> answer;
        userAnswers[i] = answer;
        if (answer == a * b) {
            correctCount++;
        }
    }
    std::cout << "Тест завершен. Количество правильных ответов: " << correctCount << "/20" << std::endl;
    return 0;
}
