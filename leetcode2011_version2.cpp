#include <vector>
#include <string>

class Solution {
public:
    int finalValueAfterOperations(const std::vector<std::string>& operations) {
        int x = 0;
        
        for (const std::string& op : operations) {
            if (op == "++X" || op == "X++") {
                x++;
            }
            if (op == "--X" || op == "X--") {
                x--;
            }
        }
        
        return x;
    }
};
