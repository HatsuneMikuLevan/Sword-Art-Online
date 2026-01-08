

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Введите предложение: ";
    getline(cin, s);
    
    int wordCount = 0;
    string word;
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            word += s[i];
        } else {
            if (!word.empty()) {
                cout << word << endl;
                wordCount++;
                word.clear();
                if (wordCount == 6) break;
            }
        }
    }
    
    if (wordCount < 6 && !word.empty()) {
        cout << word << endl;
    }
    
    return 0;
}
