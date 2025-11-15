

#include <iostream>
#include <vector>

int solve_7_68(int n, const std::vector<int>& sequence) {
    if (n == 0) return 0;
    int firstElement = sequence[0];
    int count = 0;
    int i = 0;
    while (i < n && sequence[i] == firstElement) {
        count++;
        i++;
    }
    return count;
}
