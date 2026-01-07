

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word = "программа";
    cout << "Исходное слово: " << word << endl;


    string rom;
    rom += word[1];
    rom += word[3];
    rom += word[5];
    cout << "Слово 'ром': " << rom << endl;


    string rampa;
    rampa += word[1];
    rampa += word[0];
    rampa += word.substr(5, 3);
    cout << "Слово 'рампа': " << rampa << endl;

    return 0;
}
