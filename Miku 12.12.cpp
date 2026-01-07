

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cout << "Введите слово: ";
    cin >> word;
    
    int len = word.length();
    if (len % 2 == 0) {
        cout << "Две средние буквы: " << word.substr(len/2 - 1, 2) << endl;
    } else {
        cout << "Средняя буква: " << word[len/2] << endl;
    }
    
    return 0;
}
