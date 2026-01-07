

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    int m, n;

    cout << "Введите слово: ";
    cin >> word;
    cout << "Введите m и n (1 <= m <= n <= длина слова): ";
    cin >> m >> n;

    if (m >= 1 && n <= word.length() && m <= n) {
        string part = word.substr(m - 1, n - m + 1);
        cout << "Часть слова (с " << m << "-й по " << n << "-ю букву): " << part << endl;
    } else {
        cout << "Некорректные значения m или n." << endl;
    }

    return 0;
}
