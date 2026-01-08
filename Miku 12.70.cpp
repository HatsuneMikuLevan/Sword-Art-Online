

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Введите предложение: ";
    getline(cin, s);
    
    bool hasComma = false;
    for (char c : s) {
        if (c == ',') {
            hasComma = true;
            break;
        }
    }
    
    cout << (hasComma ? "В предложении есть запятые." 
                      : "В предложении нет запятых.") << endl;
    
    return 0;
}
