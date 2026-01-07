

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cout << "Введите слово с четным числом букв: ";
    cin >> word;

    if (word.length() % 2 == 0) {
        int half = word.length() / 2;
        string swapped;
        // Вторая половина
        for (int i = half; i < word.length(); i++) {
            swapped += word[i];
        }
        // Первая половина
        for (int i = 0; i < half; i++) {
            swapped += word[i];
        }
        cout << "После обмена половин (через цикл): " << swapped << endl;
    } else {
        cout << "Слово содержит нечетное число букв." << endl;
    }

    return 0;
}
