class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string ans = "";

        // Find the length of the shortest string
        int minLength = strs[0].length();

        for (int i = 1; i < strs.size(); i++) {
            minLength = min(minLength, (int)strs[i].length());
        }

        // Check each character
        for (int i = 0; i < minLength; i++) {

            char current = strs[0][i];

            // Compare with every other string
            for (int j = 1; j < strs.size(); j++) {

                if (strs[j][i] != current) {
                    return ans;
                }
            }

            // Character is common to all strings
            ans += current;
        }

        return ans;
    }
};