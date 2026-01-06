

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    vector<int> arr = {1, 2, 2, 3, 4, 4, 4, 5, 6, 6};
    set<int> unique_elements(arr.begin(), arr.end());
    int count = unique_elements.size();
    cout << "Количество различных элементов: " << count << endl;
    return 0;
}
