#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main() {
    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);

    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    
    int length1 = b - a;
    int length2 = d - c;
    
    int overlap = std::max(0, std::min(b, d) - std::max(a, c));

    int result = length1 + length2 - overlap;

    std::cout << result;


}
