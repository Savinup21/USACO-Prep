#include <iostream>
#include <string>
#include <vector>
#include <ctype.h>
#include <algorithm> 


int main() {

    std::string s;
    std::cin >> s;
    std::transform(s.begin(), s.end(), s.begin(), ::tolower);

    for (int i = 0; i < s.size(); i++) {
         if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y' ) {
            std::cout << '.' << s[i];
        }
    }
    


}