#include 
int main() {
long long a, b, c, d, e;
std::cin >> a >> b >> c >> d >> e;

long long n1 = (a / c) * (b / d);
long long n2 = (a / d) * (b / c);
long long n3 = (a / c) * (b / e);
long long n4 = (a / e) * (b / c);
long long n5 = (a / d) * (b / e);
long long n6 = (a / e) * (b / d);

long long max_count = std::max({n1, n2, n3, n4, n5, n6});

std::cout << max_count << std::endl;

return 0;
}
