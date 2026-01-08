

#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    cout << "Введите текст: ";
    getline(cin, text);
    
    size_t endPos = text.find_first_of(".!?");
    string firstSentence = (endPos != string::npos) ? text.substr(0, endPos) : text;
    
    int countI = 0;
    for (char c : firstSentence) {
        if (c == 'и') countI++;
    }
    
    cout << "Количество букв 'и' в первом предложении: " << countI << endl;
    
    return 0;
}
