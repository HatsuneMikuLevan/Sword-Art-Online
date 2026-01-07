

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word1, word2;
    cout << "Введите первое слово: ";
    cin >> word1;
    cout << "Введите второе слово: ";
    cin >> word2;
    
    if (word1 < word2) {
        cout << "Ранее в алфавитном порядке: " << word1 << endl;
    } else {
        cout << "Ранее в алфавитном порядке: " << word2 << endl;
    }
    
    return 0;
}
