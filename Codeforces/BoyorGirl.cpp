#include <iostream>
#include <string>
#include <vector>
#include <set>
int main() {

    std::string s;
    std::cin >> s;
    std::vector<char> chars;

    std::set<char> c(s.begin(), s.end());
    
    if (c.size() % 2 == 0) {
        std::cout << "CHAT WITH HER!";
    } else {
        std::cout << "IGNORE HIM!";
    }




}