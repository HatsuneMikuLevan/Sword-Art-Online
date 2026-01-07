

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cout << "Введите слово: ";
    cin >> word;
    
    if (!word.empty()) {
        cout << "Последний символ: " << word.back() << endl;
    } else {
        cout << "Слово пустое." << endl;
    }
    
    return 0;
}
