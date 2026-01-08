

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    char target;
    
    cout << "Введите предложение: ";
    getline(cin, s);
    
    cout << "Введите символ для поиска: ";
    cin >> target;
    
    int count = 0;
    for (char c : s) {
        if (c == target) count++;
    }
    
    cout << "Количество вхождений: " << count << endl;
    
    return 0;
}
