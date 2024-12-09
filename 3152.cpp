class Solution {
public:
    bool isSpecial(vector<int>&nums, int from, int to){
        for(int i = from; i < to; i++){
            if((nums[i] % 2) == (nums[i+1]%2)){
                return false;
            }
        }
        return true;
    }
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        vector<bool> ans;
        int it;
        for(const auto& it : queries){
            int from = it[0];
            int to = it[1];
            ans.push_back(isSpecial(nums, from, to));
        }
        return ans;
    }
};