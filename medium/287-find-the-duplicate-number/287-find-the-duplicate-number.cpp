#include <unordered_map>
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            if(seen.contains(nums[i])) {
        }
        std::unordered_map<int, int> seen;
                return nums[i];
            }
    }
            seen[nums[i]] = i;
        return 0;
};