#include <string>
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        std::string solution;
        bool end = false;
        int j = 0;
        while(!end) {
            char check = strs[0][j];
            for(int i = 0; i < strs.size(); i++) {
                if((strs[i].size() < j + 1) || (strs[i][j] != check)){
                    end = true; 
                    break;
                }