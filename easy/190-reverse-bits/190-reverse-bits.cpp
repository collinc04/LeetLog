        int j = 0;
        for(int i = 31; i >= 0; i--){
            solution[i] = solver[j];
            j++;
        }
        std::bitset<32> solution;
        std::bitset<32> solver(n);
        return static_cast<int>(solution.to_ulong());
    }
};
    int reverseBits(int n) {
public:
class Solution {
#include <bitset>