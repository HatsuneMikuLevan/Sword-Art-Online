

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cout << "Введите слово: ";
    cin >> word;
    
    for (int i = 0; i < 10; i++) {
        cout << word << " ";
    }
    cout << endl;
    
    return 0;
}
