

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 19};
    unordered_map<int, int> counts;
    int duplicate = -1;

    for (int x : arr) {
        counts[x]++;
        if (counts[x] == 2) {
            duplicate = x;
            break;
        }
    }
    cout << "Одинаковые элементы: " << duplicate << endl;
    return 0;
}
