

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word = "вертикаль";
    cout << "Исходное слово: " << word << endl;


    string mir;
    mir += word[4];
    mir += word[5];
    mir += word[2];
    cout << "Слово 'мир': " << mir << endl;


    string vetka;
    vetka += word.substr(0, 2);
    vetka += word.substr(6, 3);
    cout << "Слово 'ветка': " << vetka << endl;

    return 0;
}
