#include "isogram.hpp"
#include <vector>
#include <string>
#include <iostream>
auto is_isogram(std::string const& word)->bool {
    using namespace std;
    vector<int> v1(26, 0);
    for (int i = 0; i < word.size(); ++i) {
        if ((word[i] >= 'A' && word[i] <= 'Z')) {
            v1[word[i] - 'A']++;
        }
        if (word[i] >= 'a' && word[i] <= 'z') {
            v1[word[i] - 'a']++;
        }
    }
    bool x=true;
    for (int i = 0; i < 26; ++i) {
        if (v1[i] > 1) {
            x=false;
        }
    }
    return x;
}