

#include <iostream>
#include <vector>


void get_domino_halves(int num, int& left, int& right) {
    left = num / 10;
    right = num % 10;
}

bool check_domino_a(const std::vector<int>& arr) {
    for (size_t i = 0; i + 1 < arr.size(); ++i) {
        int current_right, next_left;
        get_domino_halves(arr[i], std::ignore, current_right);
        get_domino_halves(arr[i+1], next_left, std::ignore);
        if (current_right != next_left) {
            return false;
        }
    }
    return true;
}

bool check_domino_b(const std::vector<int>& arr) {
    for (size_t i = 0; i + 1 < arr.size(); ++i) {
        int current_left, current_right, next_left, next_right;
        get_domino_halves(arr[i], current_left, current_right);
        get_domino_halves(arr[i+1], next_left, next_right);
        if (!(current_right == next_left || current_right == next_right)) {
            return false;
        }
    }
    return true;
}
