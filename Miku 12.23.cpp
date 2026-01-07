

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word = "информатика";
    cout << "Исходное слово: " << word << endl;

 
    string forma;
    forma += word.substr(2, 4); 
    forma += word[1];    
    cout << "Слово 'форма': " << forma << endl;


    string pik = word.substr(6, 3);
    cout << "Слово 'пик': " << pik << endl;

    return 0;
}
