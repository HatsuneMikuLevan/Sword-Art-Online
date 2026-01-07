

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string word;
    cout << "Введите слово: ";
    cin >> word;
    
    string reversed = word;
    reverse(reversed.begin(), reversed.end());
    
    cout << "Слово в обратном порядке: " << reversed << endl;
    
    return 0;
}
