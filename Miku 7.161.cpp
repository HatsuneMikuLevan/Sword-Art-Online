

#include <iostream>
#include <vector>
#include <limits>

int solve_7161(const std::vector<int>& points) {
    if (points.empty()) return -1; // Обработка пустого ввода

    int min_points = std::numeric_limits<int>::max();
    int best_team_num = -1;

    for (int i = 0; i < points.size(); ++i) {
 
        points[i] < min_points ? (min_points = points[i], best_team_num = i + 1) : min_points;
    }
    return best_team_num;
}

