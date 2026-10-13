class Solution {
public:
    double myPow(double x, int n) {
        if(n < 0){
            x = 1/x;
            n = -n;
        }
        if(n == 0) return 1;
        if(n == 1) return x;

        double half = myPow(x, n/2);

        if(n % 2 == 0) return half * half;

        return x * half * half;
    }
};
