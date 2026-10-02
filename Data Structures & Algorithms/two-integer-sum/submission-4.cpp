class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        for(int i=0; i<nums.size(); i++) {
            int complement = target - nums[i];
            if(m.find(complement) == m.end()){
                m[nums[i]] = i;
            }
            else{
                auto it = m.find(complement);
                return {it->second,i};
            }
        }
        return {};
    }
};
