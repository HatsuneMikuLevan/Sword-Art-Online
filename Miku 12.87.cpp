

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word1, word2;
    cout << "Введите первое слово: ";
    cin >> word1;
    cout << "Введите второе слово: ";
    cin >> word2;
    
    int matchCount = 0;
    int minLength = min(word1.length(), word2.length());
    
    for (int i = 0; i < minLength; i++) {
        if (word1[i] == word2[i]) {
            matchCount++;
        } else {
            break;
        }
    }
    
    cout << "Количество совпадающих начальных букв: " << matchCount << endl;
    
    return 0;
}
