

#include <iostream>
#include <string>
using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return (c == 'а'  c == 'е'  c == 'ё'  c == 'и'  c == 'о' || 
            c == 'у'  c == 'ы'  c == 'э'  c == 'ю'  c == 'я');
}

int main() {
    string s;
    cout << "Введите предложение: ";
    getline(cin, s);
    
    int vowelCount = 0;
    for (char c : s) {
        if (isVowel(c)) vowelCount++;
    }
    
    cout << "Количество гласных букв: " << vowelCount << endl;
    
    return 0;
}
