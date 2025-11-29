

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

int main() {
    std::vector<int> years(30);


    years = {2000, 1995, 2010, 1980, 2005, 1998, 2001, 1992, 2007, 2003,
             1990, 1985, 2002, 1996, 2008, 2004, 1991, 1988, 2006, 1999,
             1982, 1987, 2009, 2000, 1994, 1981, 2011, 1997, 1989, 1986};

    int min_year = *std::min_element(years.begin(), years.end());
    int max_year = *std::max_element(years.begin(), years.end());

    int current_year = 2025; // Текущий год
    int age_oldest = current_year - min_year; // Самый старый родился раньше (меньший год)
    int age_youngest = current_year - max_year; // Самый молодой родился позже (больший год)

    int age_difference = age_oldest - age_youngest;

    std::cout << "Разница в возрасте между самым старым и самым молодым: " << age_difference << std::endl;

    return 0;
}
