#include <string>
#include <cmath> 

class Solution {
public:
    int scoreOfString(const std::string& s) {
        int score = 0;
        
        for (size_t i = 0; i < s.size() - 1; ++i) {
            int current_symbol = static_cast<int>(s[i]);
            int next_symbol = static_cast<int>(s[i + 1]);
            score += std::abs(current_symbol - next_symbol);
        }

        return score;
    }
};
