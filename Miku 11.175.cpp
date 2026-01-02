

void solve_11_175() {
    vector<int> arr = {1, 2, -3, -4, 5, -6, 7, 8};
    int u = 0;

    cout << "Исходный массив: ";
    for (int x : arr) cout << x << " ";

    for (int i = 0; i < arr.size() - 1; ++i) {

        if ((long long)arr[i] * arr[i+1] > 0) { 
            arr.insert(arr.begin() + i + 1, u);
            i++; 
        }
    }

    cout << "\nМассив после вставки " << u << " между соседними элементами с одинаковым знаком: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

}
