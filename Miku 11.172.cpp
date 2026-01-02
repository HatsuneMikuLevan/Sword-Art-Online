

void solve_11_172() {
    vector<int> arr = {5, 20, 3, 40, 15, 1};
    int n = 10;
    int m = 30;

    cout << "Исходный массив: ";
    for (int x : arr) cout << x << " ";

    // Вставка n перед элементами > n
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] > n) {
            arr.insert(arr.begin() + i, n);
            i++; 
        }
    }

    // Вставка m после элементов < m
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] < m) {
            arr.insert(arr.begin() + i + 1, m);
            i++; 
        }
    }
    
    cout << "\nМассив после вставок (n=" << n << ", m=" << m << "): ";
    for (int x : arr) cout << x << " ";
    cout << endl;


}
