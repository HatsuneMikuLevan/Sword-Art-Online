

#include <iostream>
#include <vector>
#include <numeric>

void solve_a(std::vector<int>& arr) {
    for (int& element : arr) {
        if (element % 10 == 0) {
            element = 0;
        }
    }
}

int main() {
    std::vector<int> arr = {10, 25, 30, 42, 50};
    solve_a(arr);
    std::cout << "Результат 11.39 a): ";
    for (int element : arr) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
    return 0;
}
#include <iostream>
#include <vector>

void solve_b(std::vector<int>& arr) {
    for (int& element : arr) {
        if (element % 2 != 0) {
            element *= 2;
        } else {
            element /= 2;
        }
    }
}

int main() {
    std::vector<int> arr = {10, 25, 30, 42, 50};
    solve_b(arr);
    std::cout << "Результат 11.39 b): ";
    for (int element : arr) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
    return 0;
}
#include <iostream>
#include <vector>

void solve_c(std::vector<int>& arr, int m, int n) {
    for (size_t i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 != 0) {
            arr[i] -= m;
        }
        // Assuming 1-based indexing for "odd indices" as commonly used in problem statements
        // If 0-based indexing is needed, change (i + 1) % 2 != 0 to i % 2 != 0
        if ((i + 1) % 2 != 0) {
            arr[i] += n;
        }
    }
}

int main() {
    std::vector<int> arr = {10, 25, 30, 42, 50};
    int m = 5; // Example value for m
    int n = 10; // Example value for n
    solve_c(arr, m, n);
    std::cout << "Результат 11.39 v): ";
    for (int element : arr) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
    return 0;
}
