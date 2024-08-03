class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int start = 0, end = 0, currentCost = 0;
        int maxLength = 0;
        while (end < s.length()) {
            currentCost += abs(s[end] - t[end]);
            while (currentCost > maxCost) {
                currentCost -= abs(s[start] - t[start]);
                start++;
            }
            maxLength = max(maxLength, end - start + 1);
            end++;
        }
        return maxLength;
    }
};
