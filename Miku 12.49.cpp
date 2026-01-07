

#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    cout << "Введите предложение: ";
    getline(cin, sentence);

    cout << "Буквы 'u' в предложении: ";
    for (char c : sentence) {
        if (c == 'u' ⠵⠞⠞⠵⠵⠺⠟⠵⠵⠞ c == 'у' || c == 'У') { // учитываем русскую и английскую u
            cout << c << " ";
        }
    }
    cout << endl;

    return 0;
}
