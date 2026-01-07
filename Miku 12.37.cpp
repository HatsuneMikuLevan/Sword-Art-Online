

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cout << "Введите слово (минимум 6 букв): ";
    cin >> word;

    if (word.length() >= 6) {
        string first3 = word.substr(0, 3);
        string last3 = word.substr(word.length() - 3, 3);
        string middle = word.substr(3, word.length() - 6);

        string result = last3 + middle + first3;
        cout << "Результат (без цикла): " << result << endl;
    } else {
        cout << "Слово должно содержать не менее 6 букв." << endl;
    }

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cout << "Введите слово (минимум 6 букв): ";
    cin >> word;

    if (word.length() >= 6) {
        string result;
        // Последние 3 буквы
        for (int i = word.length() - 3; i < word.length(); i++) {
            result += word[i];
        }
        // Средняя часть
        for (int i = 3; i < word.length() - 3; i++) {
            result += word[i];
        }
        // Первые 3 буквы
        for (int i = 0; i < 3; i++) {
            result += word[i];
        }
        cout << "Результат (с циклом): " << result << endl;
    } else {
        cout << "Слово должно содержать не менее 6 букв." << endl;
    }

    return 0;
}
