class Solution {
public:
    int fib(int n) {
        int res = 0;
        if(n==0 || n==1){
            return n;
        }
        res = fib(n-1) + fib(n-2);
        return res;
    }
};