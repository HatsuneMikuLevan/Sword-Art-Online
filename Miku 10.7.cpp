

#include <iostream>
#include <cstdlib>
#include <ctime>

void solve_10_7a() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int a = std::rand() % 2; // a может быть 0 или 1
    int b = (std::rand() % 2) + 1; // b может быть 1 или 2
    std::cout << "10.7 a) a = " << a << ", b = " << b << std::endl;
}
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>

void solve_10_7b() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int a = 2; // a всегда 2
    int b = (std::rand() % 2) + 1; // b может быть 1 или 2
    int c = (std::rand() % 2) + 2; // c может быть 2 или 3
    std::cout << "10.7 б) a = " << a << ", b = " << b << ", c = " << c << std::endl;
}
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
#include <random>

void solve_10_7v() {
    std::vector<int> numbers;
    for (int i = 0; i < 7; ++i) numbers.push_back(2);
    for (int i = 0; i < 8; ++i) numbers.push_back(3);

    unsigned seed = static_cast<unsigned int>(std::time(nullptr));
    std::shuffle(numbers.begin(), numbers.end(), std::default_random_engine(seed));

    std::cout << "10.7 в) Последовательность: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}
