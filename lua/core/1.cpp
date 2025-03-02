#include <bits/stdc++.h>

std::vector<int> func(int64_t& first, int64_t& second) {
    std::vector<int> vec;
    vec.push_back(first);
    vec.push_back(second);
    return vec;
}

int main() {

    int t = 0;
    std::cin >> t;
    std::vector<int64_t> devs;

    while (t--) {
        int64_t temp;
        std::cin >> temp;
        devs.push_back(temp);
    }
    for (auto x : devs) std::cout << x << ' ';
    std::cout << '\n';
    return 0;
}
