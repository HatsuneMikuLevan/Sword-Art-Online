

#include <iostream>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    long long n = 2242424; // Пример числа
    string s = to_string(n);
    set<char> unique_digits(s.begin(), s.end());
    int count = unique_digits.size();
    cout << "Количество различных цифр в числе " << n << ": " << count << endl;
    return 0;
}
