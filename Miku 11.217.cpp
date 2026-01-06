

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;


string addLargeNumbers(string num1, string num2) {
    string result = "";
    int n1 = num1.length(), n2 = num2.length();
    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());

    int carry = 0;
    for (int i = 0; i < max(n1, n2); i++) {
        int d1 = (i < n1) ? (num1[i] - '0') : 0;
        int d2 = (i < n2) ? (num2[i] - '0') : 0;
        int sum = d1 + d2 + carry;
        result += to_string(sum % 10);
        carry = sum / 10;
    }
    if (carry) result += to_string(carry);
    reverse(result.begin(), result.end());
    return result;
}


string subtractLargeNumbers(string num1, string num2) {
    string result = "";
    int n1 = num1.length(), n2 = num2.length();
    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());

    int borrow = 0;
    for (int i = 0; i < n1; i++) {
        int d1 = num1[i] - '0' - borrow;
        int d2 = (i < n2) ? (num2[i] - '0') : 0;
        if (d1 >= d2) {
            result += to_string(d1 - d2);
            borrow = 0;
        } else {
            d1 = d1 + 10;
            result += to_string(d1 - d2);
            borrow = 1;
        }
    }

    while (result.length() > 1 && result.back() == '0') {
        result.pop_back();
    }
    reverse(result.begin(), result.end());
    return result;
}


int main() {
    // a) Сложение 20-значных чисел
    string numA1 = "12345678901234567890";
    string numA2 = "98765432109876543210";
    cout << "Сумма: " << addLargeNumbers(numA1, numA2) << endl;

    // б) Вычитание 30-значных чисел (пример)
    string numB1 = "987654321098765432101234567890";
    string numB2 = "123456789012345678901234567890";
    cout << "Разность: " << subtractLargeNumbers(numB1, numB2) << endl;

    return 0;
}
