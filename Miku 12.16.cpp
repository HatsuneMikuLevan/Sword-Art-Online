

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string word1, word2;
    cout << "Введите первое слово: ";
    cin >> word1;
    cout << "Введите второе слово: ";
    cin >> word2;
    
    string sorted1 = word1;
    string sorted2 = word2;
    
    sort(sorted1.begin(), sorted1.end());
    sort(sorted2.begin(), sorted2.end());
    
    if (sorted1 == sorted2) {
        cout << "Слова являются анаграммами." << endl;
    } else {
        cout << "Слова не являются анаграммами." << endl;
    }
    
    return 0;
}
