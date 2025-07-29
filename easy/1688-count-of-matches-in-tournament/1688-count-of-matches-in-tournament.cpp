class Solution {
public:
    int numberOfMatches(int n) {
        if(n % 2 == 1){
            n --;
        } else {
            return numberOfMatches(n/2);
        }
    }
        if(n == 1) {return solution;}
            n = n/2;
            return numberOfMatches(n + 1);
            solution += n;
            solution += n/2;
    int solution = 0;
};