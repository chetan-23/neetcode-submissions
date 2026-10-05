// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if(s.size() != t.size()) return false;
//         int n = s.size();
//         sort(s.begin(), s.end());
//         sort(t.begin(), t.end());

//         return s == t;
//     }
// };

class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.size() != t.size())
            return false;

        unordered_map<char, int> m;

        for (char c : s) {
            m[c]++;
        }

        for (char c : t) {
            m[c]--;
        }

        for (auto pair : m) {
            if (pair.second != 0)
                return false;
        }

        return true;
    }
};