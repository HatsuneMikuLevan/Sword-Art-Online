

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    int k;
    
    cout << "Введите слово: ";
    cin >> word;
    cout << "Введите номер символа k (начиная с 1): ";
    cin >> k;
    
    if (k >= 1 && k <= word.length()) {
        cout << k << "-й символ: " << word[k - 1] << endl;
    } else {
        cout << "Некорректный номер символа." << endl;
    }
    
    return 0;
}
