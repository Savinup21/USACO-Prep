#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {

    std::string s;
    std::cin >> s;
    std::vector<char> chars;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1' || s[i] == '2' || s[i] == '3') {
            chars.push_back(s[i]);
        } 
    }

    std::sort(chars.begin(), chars.end());
    for (int k = 0; k < chars.size(); k++) {
        if (k == (chars.size() - 1)) {
            std::cout << chars[k];
        } else {
            std::cout << chars[k] << '+';
        }
    }

}