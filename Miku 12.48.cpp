

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word1, word2;
    cout << "Введите первое (длинное) слово: ";
    cin >> word1;
    cout << "Введите второе (короткое) слово: ";
    cin >> word2;

    if (word1.length() > word2.length()) {

        string result = word1;

        word2 = word1;
        cout << "Второе слово после замены: " << word2 << endl;
    } else {
        cout << "Первое слово должно быть длиннее второго." << endl;
    }

    return 0;
}
