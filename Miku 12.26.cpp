

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word = "прос";
    cout << "Исходное слово: " << word << endl;


    string sorta;
    sorta += word[2];
    sorta += word[3];
    sorta += word[1];
    sorta += word[0];
    sorta += word[0];
    cout << "Слово 'сорта': " << sorta << endl;


    string rost;
    rost += word[1];
    rost += word[3];
    rost += word[2];
    rost += word[0];
    cout << "Слово 'рост': " << rost << endl;


    string poroh;
    poroh += word[0];
    poroh += word[3];
    poroh += word[1];
    poroh += word[2];
    poroh += word[0];
    cout << "Слово 'порох': " << poroh << endl;

    return 0;
}
