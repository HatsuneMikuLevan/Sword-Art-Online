
#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cout << "Введите слово: ";
    cin >> word;
    
    if (word.length() >= 2 && word.front() == word.back()) {
        cout << "Первый и последний символы одинаковы." << endl;
    } else {
        cout << "Первый и последний символы различны." << endl;
    }
    
    return 0;
}
