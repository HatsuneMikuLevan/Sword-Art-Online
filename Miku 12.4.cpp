

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cout << "Введите слово: ";
    cin >> word;
    
    if (word.length() >= 3) {
        cout << "Третий символ: " << word[2] << endl;
    } else {
        cout << "Слово слишком короткое." << endl;
    }
    
    return 0;
}
