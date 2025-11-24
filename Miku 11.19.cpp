

#include <iostream>
#include <vector>
#include <cmath>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    std::vector<int> primes;
    int num = 100;
    while (primes.size() < 10) {
        if (isPrime(num)) {
            primes.push_back(num);
        }
        num++;
    }
    std::cout << "Первые 10 простых чисел, начиная со 100: ";
    for (int prime : primes) {
        std::cout << prime << " ";
    }
    std::cout << std::endl;
    return 0;
}
