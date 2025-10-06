#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>

// Функция для задачи 3.28 а)
int reverseNumber(int n) {
    std::string s = std::to_string(n);
    std::reverse(s.begin(), s.end());
    return std::stoi(s);
}

// Функция для задачи 3.28 б)
int swapFirstTwoAndLastTwo(int n) {
    std::string s = std::to_string(n);
    std::swap(s[0], s[1]);
    std::swap(s[2], s[3]);
    return std::stoi(s);
}

// Функция для задачи 3.28 в)
int swapMiddleTwo(int n) {
    std::string s = std::to_string(n);
    std::swap(s[1], s[2]);
    return std::stoi(s);
}

// Функция для задачи 3.28 г) 
int swapFirstTwoAndLastTwo_v1(int n) {
    int d1 = n / 1000;
    int d2 = (n / 100) % 10;
    int d3 = (n / 10) % 10;
    int d4 = n % 10;
    return d4 * 1000 + d3 * 100 + d2 * 10 + d1;
}



int main() {
    int number_a = 1234;
    std::cout << "a) " << reverseNumber(number_a) << std::endl;



    return 0;
}
