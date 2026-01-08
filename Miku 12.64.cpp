

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Введите предложение: ";
    getline(cin, s);
    
    int wordCount = 0;
    bool inWord = false;
    
    for (char c : s) {
        if (c != ' ' && !inWord) {
            inWord = true;
            wordCount++;
        } else if (c == ' ') {
            inWord = false;
        }
    }
    
    cout << "Количество слов: " << wordCount << endl;
    
    return 0;
}
