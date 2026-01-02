

bool containsDigitFive(int num) {
    // Проверяем наличие цифры 5 в числе
    num = abs(num);
    while (num > 0) {
        if (num % 10 == 5) return true;
        num /= 10;
    }
    return false;
}

void solve_11_174() {
    vector<int> arr = {15, 20, 5, 33, 451, 100};
    int a = 999;

    cout << "Исходный массив: ";
    for (int x : arr) cout << x << " ";

    for (int i = 0; i < arr.size(); ++i) {
        if (containsDigitFive(arr[i])) {
            arr.insert(arr.begin() + i + 1, a);
            i++; // Пропускаем только что вставленный элемент
        }
    }
    
    cout << "\nМассив после вставки " << a << " после элементов с цифрой 5: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

}
