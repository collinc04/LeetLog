class Solution {
public:
    int fib(int n) {
        int fib[3];
        fib[0] = 0;
        fib[1] = 1;
        for(int i = 1; i < n; i++){
            fib[2] = fib[0] + fib[1];
            fib[0] = fib[1];
            fib[1] = fib[2];
        }
        return fib[2];
        if(n <= 1) {
            return n;
        }
    }
};