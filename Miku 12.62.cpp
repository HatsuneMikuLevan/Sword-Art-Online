

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Введите предложение: ";
    getline(cin, s);
    
    int count = 0;
    for (size_t i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i + 1]) count++;
    }
    
    cout << "Количество одинаковых соседних букв: " << count << endl;
    
    return 0;
}
