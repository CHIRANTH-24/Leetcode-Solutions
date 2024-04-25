class Solution {
    public int countKDifference(int[] nums, int k) {
        int dif;
        int count = 0;
        for(int i = 0; i < nums.length; i++){
            for(int p = i; p < nums.length; p++){
                if(nums[i] >= nums[p]){
                    dif = nums[i] - nums[p];
                }
                else{
                    dif = nums[p] - nums[i];
                }
                if(dif == k){
                    count++;
                }
            }
        }
        return count;
    }
}