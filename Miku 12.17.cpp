

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cout << "Введите слово (минимум 4 символа): ";
    cin >> word;

    if (word.length() >= 4) {
        string result;
        result += word[1]; 
        result += word[3]; 
        cout << "Буквосочетание (2-й и 4-й символы): " << result << endl;
    } else {
        cout << "Слово слишком короткое." << endl;
    }

    return 0;
}
