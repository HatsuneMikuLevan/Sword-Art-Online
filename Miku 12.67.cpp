

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Введите текст: ";
    getline(cin, s);
    
    int sentenceCount = 0;
    for (char c : s) {
        if (c == '.'  c == '!'  c == '?') sentenceCount++;
    }
    
    cout << "Количество предложений: " << sentenceCount << endl;
    
    return 0;
}
