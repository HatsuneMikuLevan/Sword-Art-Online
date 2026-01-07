

#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    char symbol;

    cout << "Введите предложение: ";
    getline(cin, sentence);
    cout << "Введите символ для поиска: ";
    cin >> symbol;

    cout << "Вхождения символа '" << symbol << "' столбиком:" << endl;
    for (char c : sentence) {
        if (c == symbol) {
            cout << c << endl;
        }
    }

    return 0;
}
