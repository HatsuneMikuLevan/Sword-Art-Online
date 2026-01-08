

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Введите предложение: ";
    getline(cin, s);
    
    // Пропускаем начальные пробелы
    size_t start = s.find_first_not_of(' ');
    size_t end = s.find(' ', start);
    
    string firstWord = (end != string::npos) ? s.substr(start, end - start) : s.substr(start);
    
    int countO = 0;
    for (char c : firstWord) {
        if (c == 'o' || c == 'о') countO++; // учитываем латинскую и русскую 'o'
    }
    
    cout << "Количество букв 'o' в первом слове: " << countO << endl;
    
    return 0;
}
