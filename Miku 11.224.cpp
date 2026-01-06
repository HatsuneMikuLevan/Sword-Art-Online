

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    // 26 игр в каждом чемпионате
    vector<int> goalsChamp1 = {1, 2, 0, /* ... 26 значений */ 3};
    vector<int> goalsChamp2 = {0, 1, 1, /* ... 26 значений */ 2};

    // Заполнение массивов для примера
    goalsChamp1.resize(26, 1);
    goalsChamp2.resize(26, 1);

    int totalGoalsChamp1 = accumulate(goalsChamp1.begin(), goalsChamp1.end(), 0);
    int totalGoalsChamp2 = accumulate(goalsChamp2.begin(), goalsChamp2.end(), 0);
    int totalGoals = totalGoalsChamp1 + totalGoalsChamp2;

    cout << "Общее количество забитых мячей в двух чемпионатах: " << totalGoals << endl;
    return 0;
}
