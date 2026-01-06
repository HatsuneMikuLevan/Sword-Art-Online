

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    vector<int> digits;
    digits.push_back(1); // Начинаем с 2^0 = 1

    for (int i = 0; i < 100; i++) {
        int carry = 0;
        for (int j = 0; j < digits.size(); j++) {
            int val = digits[j] * 2 + carry;
            digits[j] = val % 10;
            carry = val / 10;
        }
        while (carry) {
            digits.push_back(carry % 10);
            carry /= 10;
        }
    }

    cout << "Цифры числа 2^100: ";
    for (int i = digits.size() - 1; i >= 0; i--) {
        cout << digits[i];
    }
    cout << endl;
    return 0;
}
