

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cout << "Введите слово (минимум 3 символа): ";
    cin >> word;

    if (word.length() >= 3) {
        string result;
        result += word[2]; 
        result += word.back();
        cout << "Буквосочетание (3-й и последний): " << result << endl;
    } else {
        cout << "Слово слишком короткое." << endl;
    }

    return 0;
}
