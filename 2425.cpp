class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int xor1 = 0, xor2 = 0;
        for (int num : nums1) {
            xor1 ^= num;
        }
        for (int num : nums2) {
            xor2 ^= num;
        }
        int n = nums1.size();
        int m = nums2.size();
        return (m % 2 == 1 ? xor1 : 0) ^ (n % 2 == 1 ? xor2 : 0);
    }
};
