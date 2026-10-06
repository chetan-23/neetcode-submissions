class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int numSum = 0;
        int n = nums.size();
        int sum = (n * (n + 1))/2;
        for(int i = 0; i<n; i++){
            numSum += nums[i];
        }

        return sum - numSum;
    }
};
