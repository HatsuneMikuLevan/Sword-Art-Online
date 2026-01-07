

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cout << "Введите слово: ";
    cin >> word;
    
    if (word.length() >= 2) {
        string result = "";
        result += word.front();
        result += word.back();
        cout << "Первый и последний символы: " << result << endl;
    } else {
        cout << "Слово слишком короткое." << endl;
    }
    
    return 0;
}
