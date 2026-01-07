

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cout << "Введите слово с четным числом букв: ";
    cin >> word;

    if (word.length() % 2 == 0) {
        string firstHalf = word.substr(0, word.length() / 2);
        cout << "Первая половина слова: " << firstHalf << endl;
    } else {
        cout << "Слово содержит нечетное число букв." << endl;
    }

    return 0;
}
