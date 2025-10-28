#include
struct Rectangle {
double x, y, width, height;
};

int main() {
Rectangle rect1, rect2;

std::cout << "Введите x, y, width, height для первого прямоугольника: ";
std::cin >> rect1.x >> rect1.y >> rect1.width >> rect1.height;

std::cout << "Введите x, y, width, height для второго прямоугольника: ";
std::cin >> rect2.x >> rect2.y >> rect2.width >> rect2.height;

// a) Принадлежит ли rect1 rect2?
bool rect1_in_rect2 = (rect1.x >= rect2.x && rect1.x + rect1.width <= rect2.x + rect2.width &&
rect1.y >= rect2.y && rect1.y + rect1.height <= rect2.y + rect2.height);
std::cout << "а) Все точки первого прямоугольника принадлежат второму: " << (rect1_in_rect2 ? "Да" : "Нет") << std::endl;

// б) Принадлежит ли один другому?
bool rect2_in_rect1 = (rect2.x >= rect1.x && rect2.x + rect2.width <= rect1.x + rect1.width &&
rect2.y >= rect1.y && rect2.y + rect2.height <= rect1.y + rect1.height);
std::cout << "б) Все точки одного из прямоугольников принадлежат другому: " << (rect1_in_rect2 || rect2_in_rect1 ? "Да" : "Нет") << std::endl;

// в) Пересекаются ли?
bool intersect_x = (rect1.x < rect2.x + rect2.width && rect1.x + rect1.width > rect2.x);
bool intersect_y = (rect1.y < rect2.y + rect2.height && rect1.y + rect1.height > rect2.y);
bool intersect = intersect_x && intersect_y;
std::cout << "в) Пересекаются ли эти прямоугольники: " << (intersect ? "Да" : "Нет") << std::endl;

return 0;
}

