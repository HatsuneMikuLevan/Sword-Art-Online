

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word = "яблоко";
    cout << "Исходное слово: " << word << endl;


    string bloka = word.substr(1, 4);
    cout << "Слово 'блока': " << bloka << endl;


    string oko;
    oko += word[4];
    oko += word[5];
    oko += word[3];
    cout << "Слово 'око': " << oko << endl;

    return 0;
}
