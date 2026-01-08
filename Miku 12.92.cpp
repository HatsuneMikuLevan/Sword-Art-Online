

#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    cout << "Введите текст: ";
    getline(cin, text);
    
    bool correct = true;
    for (size_t i = 0; i < text.length() - 1; i++) {
        if (text[i] == 'ж' && text[i + 1] == 'ы') {
            cout << "Ошибка: 'жы' на позиции " << (i + 1) << endl;
            correct = false;
        }
        if (text[i] == 'ш' && text[i + 1] == 'ы') {
            cout << "Ошибка: 'шы' на позиции " << (i + 1) << endl;
            correct = false;
        }
    }
    
    if (correct) {
        cout << "Все буквосочетания 'жи' и 'ши' записаны правильно." << endl;
    }
    
    return 0;
}
