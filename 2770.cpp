class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        vector<long long> pre(n); // Using long long for handling large sums
        pre[0] = nums[0];
        
        // Compute prefix sum
        for (int i = 1; i < n; i++) {
            pre[i] = pre[i - 1] + nums[i];
        }

        int count = 0;
        long long totalSum = pre[n - 1];
        
        // Check for valid splits
        for (int i = 0; i < n - 1; i++) { // n-1 because there must be at least one element on the right
            long long leftSum = pre[i];
            long long rightSum = totalSum - leftSum;
            if (leftSum >= rightSum) {
                count++;
            }
        }

        return count;
    }
};
