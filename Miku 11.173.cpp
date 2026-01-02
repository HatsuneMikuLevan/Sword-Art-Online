

#include <algorithm> // Для std::sort

void solve_11_173() {
    vector<int> growth = {180, 178, 175, 172, 170, 168, 165, 160}; // Пример массива (упорядочен по убыванию)
    int initialSize = growth.size();

    cout << "Исходный массив роста (убывание): ";
    for (int x : growth) cout << x << " ";
    cout << endl;


    int index1 = 3; 
    int newGrowth1 = 171; 
    growth.insert(growth.begin() + index1, newGrowth1);
    
    cout << "После вставки (случай 1, индекс " << index1 << ", рост " << newGrowth1 << "): ";
    for (int x : growth) cout << x << " ";
    cout << endl;


    // Случай 2: Известен рост нового ученика
    int newGrowth2 = 176;
    growth.push_back(newGrowth2);
    // Для сохранения порядка сортируем весь массив по убыванию
    sort(growth.begin(), growth.end(), greater<int>()); 

    cout << "После вставки (случай 2, рост " << newGrowth2 << ") и сортировки: ";
    for (int x : growth) cout << x << " ";
    cout << endl;
}
