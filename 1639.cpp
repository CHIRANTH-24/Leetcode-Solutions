class Solution {
public:
    int numWays(vector<string>& words, string target) {
        const int MOD = 1e9 + 7;
        int m = words[0].size(), n = words.size(), t_len = target.size();

        // Step 1: Precompute the frequency of each character at each position
        vector<vector<int>> freq(m, vector<int>(26, 0));
        for (const string& word : words) {
            for (int i = 0; i < m; ++i) {
                freq[i][word[i] - 'a']++;
            }
        }

        // Step 2: Initialize DP array
        vector<long long> dp(t_len + 1, 0);
        dp[0] = 1; // There's one way to form an empty target

        // Step 3: Update DP array from right to left
        for (int i = 0; i < m; ++i) {
            for (int j = t_len - 1; j >= 0; --j) {
                if (target[j] - 'a' >= 0 && target[j] - 'a' < 26) {
                    dp[j + 1] = (dp[j + 1] + dp[j] * freq[i][target[j] - 'a']) % MOD;
                }
            }
        }

        return dp[t_len];
    }
};