

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    int k;
    cout << "Введите слово: ";
    cin >> word;
    cout << "Введите k (меньше длины слова): ";
    cin >> k;

    if (k > 0 && k < word.length()) {
        string firstK = word.substr(0, k);
        string rest = word.substr(k, word.length() - k);
        string result = rest + firstK;
        cout << "Результат (без цикла): " << result << endl;
    } else {
        cout << "Некорректное значение k." << endl;
    }

    return 0;
}


#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    int k;
    cout << "Введите слово: ";
    cin >> word;
    cout << "Введите k (меньше длины слова): ";
    cin >> k;

    if (k > 0 && k < word.length()) {
        string result;
        // Буквы с k+1 до конца
        for (int i = k; i < word.length(); i++) {
            result += word[i];
        }
        // Первые k букв
        for (int i = 0; i < k; i++) {
            result += word[i];
        }
        cout << "Результат (с циклом): " << result << endl;
    } else {
        cout << "Некорректное значение k." << endl;
    }

    return 0;
}
