/*
Problem: 3. Longest Substring Without Repeating Characters
URL: https://leetcode.com/problems/longest-substring-without-repeating-characters/
Language: C++
Author: dvchinx
*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<int, int> last; int l = 0, best = 0;
        for (int r = 0; r < (int)s.length(); ++r) {
            if (last.count(s[r])) l = max(l, last[s[r]]+1);
            last[s[r]] = r;
            best = max(best, r-l+1);
        }
        return best;
    }
};