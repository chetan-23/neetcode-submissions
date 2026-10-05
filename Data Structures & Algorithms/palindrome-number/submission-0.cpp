class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        int mod;
        int n = 0;
        int temp = x;
        while(x != 0){
            mod = x % 10;
            n = n * 10 + mod;
            x = x/10;
        }
        return (n == temp);
    }
};