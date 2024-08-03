class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = 0;
        int count = 0;
        while(n <= nums.size()){
            count = 0;
            for(int j = 0; j < nums.size(); j++){
                if(nums[j] >= n){
                    count++;
                }
            }
            if(count == n){
                return n;
            }
            n++;
        }
        return -1;
    }
};