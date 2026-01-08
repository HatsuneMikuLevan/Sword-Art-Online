

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Введите предложение: ";
    getline(cin, s);
    
    size_t commaPos = s.find(',');
    int countI = 0;
    
    if (commaPos != string::npos) {
        for (size_t i = 0; i < commaPos; i++) {
            if (s[i] == 'и') countI++;
        }
        cout << "Количество букв 'и' до первой запятой: " << countI << endl;
    } else {
        cout << "Запятых нет." << endl;
    }
    
    return 0;
}
