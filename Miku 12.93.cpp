

#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    cout << "Введите текст: ";
    getline(cin, text);
    
    for (size_t i = 0; i < text.length() - 1; i++) {
        if (text[i] == 'ч' && text[i + 1] == 'я') {
            text[i + 1] = 'а';
        }
        if (text[i] == 'щ' && text[i + 1] == 'я') {
            text[i + 1] = 'а';
        }
    }
    
    cout << "Исправленный текст: " << text << endl;
    
    return 0;
}
