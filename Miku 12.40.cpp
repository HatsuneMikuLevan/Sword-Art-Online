
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string word;
    cout << "Введите слово: ";
    cin >> word;

    cout << "Слово от конца к началу: ";
    for (int i = word.length() - 1; i >= 0; i--) {
        cout << word[i];
    }
    cout << endl;

    return 0;
}
