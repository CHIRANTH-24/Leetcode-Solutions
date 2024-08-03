class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> ans;
        vector<int> s = nums;
        sort(s.begin(),s.end());
        int i = 0;
        while(i <= nums.size() - 2){
            ans.push_back(s[i+1]);
            ans.push_back(s[i]);
            i+=2;
        }
        return ans;
    }
};