

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string word;
    cout << "Введите слово: ";
    cin >> word;
    
    string reversed = word;
    reverse(reversed.begin(), reversed.end());
    
    if (word == reversed) {
        cout << "Слово является палиндромом." << endl;
    } else {
        cout << "Слово не является палиндромом." << endl;
    }
    
    return 0;
}
