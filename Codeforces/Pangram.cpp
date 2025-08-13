#include <iostream> 
#include <algorithm>
#include <set>
int main() {
    std::string s;
    int n;
    std::cin >> n;
    std::cin >> s;
    std::string a = "abcdefghijklmnopqrstuvwxyz";
    std::transform(s.begin(), s.end(), s.begin(), ::tolower);
    std::set<char> c(s.begin(), s.end());
    if (c.size() == 26) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
}