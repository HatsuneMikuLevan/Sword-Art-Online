

#include <iostream>
#include <vector>
#include <string>
#include <limits>

std::string solve_11_135(const std::vector<int>& scores) {
    int first_win_idx = std::numeric_limits<int>::max();
    int first_loss_idx = std::numeric_limits<int>::max();

    for (int i = 0; i < scores.size(); ++i) {
        if (scores[i] == 3 && first_win_idx == std::numeric_limits<int>::max()) {
            first_win_idx = i;
        }
        if (scores[i] == 0 && first_loss_idx == std::numeric_limits<int>::max()) {
            first_loss_idx = i;
        }
        if (first_win_idx != std::numeric_limits<int>::max() && first_loss_idx != std::numeric_limits<int>::max()) {
            break;
        }
    }

    if (first_win_idx == std::numeric_limits<int>::max() && first_loss_idx == std::numeric_limits<int>::max()) {
        return "Ни выигрышей, ни проигрышей не было";
    } else if (first_win_idx < first_loss_idx) {
        return "Первый выигрыш был раньше";
    } else if (first_loss_idx < first_win_idx) {
        return "Первый проигрыш был раньше";
    } else {
        return "Неприменимо (например, только ничьи)";
    }
}

