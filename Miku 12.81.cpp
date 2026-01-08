

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Введите предложение: ";
    getline(cin, s);
    
    string longestWord, currentWord;
    int maxLength = 0;
    
    for (char c : s) {
        if (c != ' ') {
            currentWord += c;
        } else {
            if (currentWord.length() > maxLength) {
                maxLength = currentWord.length();
                longestWord = currentWord;
            }
            currentWord.clear();
        }
    }
    
    if (currentWord.length() > maxLength) {
        longestWord = currentWord;
    }
    
    cout << "Самое длинное слово: " << longestWord << endl;
    
    return 0;
}
