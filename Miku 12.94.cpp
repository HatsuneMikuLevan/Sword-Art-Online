

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Введите предложение: ";
    getline(cin, s);
    
    size_t firstComma = s.find(',');
    if (firstComma != string::npos) {
        size_t secondComma = s.find(',', firstComma + 1);
        if (secondComma != string::npos) {
            cout << "Символы между запятыми: " 
                 << s.substr(firstComma + 1, secondComma - firstComma - 1) << endl;
        } else {
            cout << "Символы после единственной запятой: " 
                 << s.substr(firstComma + 1) << endl;
        }
    } else {
        cout << "Запятых нет." << endl;
    }
    
    return 0;
}
