

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Введите предложение: ";
    getline(cin, s);
    
    // а) для "рд"
    int countRd = 0;
    for (size_t i = 0; i < s.length() - 1; i++) {
        if (s[i] == 'р' && s[i + 1] == 'д') countRd++;
    }
    cout << "а) Количество 'рд': " << countRd << endl;
    
    // б) для произвольного буквосочетания из двух букв
    string pair;
    cout << "б) Введите буквосочетание из двух букв: ";
    cin >> pair;
    
    int countPair = 0;
    for (size_t i = 0; i < s.length() - 1; i++) {
        if (s.substr(i, 2) == pair) countPair++;
    }
    cout << "   Количество вхождений: " << countPair << endl;
    
    // в) для произвольного буквосочетания
    cin.ignore();
    string substring;
    cout << "в) Введите буквосочетание: ";
    getline(cin, substring);
    
    int countSub = 0;
    size_t pos = s.find(substring, 0);
    while (pos != string::npos) {
        countSub++;
        pos = s.find(substring, pos + 1);
    }
    cout << "   Количество вхождений: " << countSub << endl;
    
    return 0;
}
