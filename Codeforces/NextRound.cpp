#include <iostream>
#include <vector>

int main() {

    long long n, k; //n is number of test-takers, k is the passing score
    std::cin >> n >> k;
    std::vector<int> s(n); //scores of test-takers
    for (int i = 0; i < s.size(); i++) {
        std::cin  >> s[i];
    };
    int people_passed = 0;
    for (int g = 0; g < s.size(); g++) {
        if (s[g] >= s[k-1] && s[g] > 0) {
            people_passed += 1;
        }
    }
    std::cout << people_passed;

}