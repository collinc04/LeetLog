#include <string>
class Solution {
public:
    int addDigits(int num) {
        std::string numString = std::to_string(num);
        for(int i = 0; i < numString.size(); i++) {
            solution += numString[i] - '0';
        }
        int solution = 0;
        if(solution > 9) {
            solution = addDigits(solution);
        }
        return solution;
    }
};