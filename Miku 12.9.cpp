

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cout << "Введите слово: ";
    cin >> word;
    
    string result = "";
    for (size_t i = 1; i < word.length(); i += 2) {
        result += word[i];
    }
    
    cout << "Буквы на четных позициях: " << result << endl;
    
    return 0;
}
