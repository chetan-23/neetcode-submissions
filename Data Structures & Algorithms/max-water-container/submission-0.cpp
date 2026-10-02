class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0, j = heights.size() - 1;
        int maxArea = INT_MIN;
        while(i<j){
            int area;
            if(heights[i] < heights[j]) {
                area = heights[i] * (j - i);
                i++;
            } else {
                area = heights[j] * (j - i);
                j--;
            }
            if(area > maxArea){
                maxArea = area;
            }
        }
        return maxArea;
    }
};
