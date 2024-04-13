class Solution {
    public int singleNumber(int[] nums) {
        int flag[] = new int[nums.length];
        int k = 0;
        for(int i = 0; i < nums.length; i++){
            for(int j = 0; j < nums.length; j++){
                if(j > i && nums[i] == nums[j]){
                    flag[j] = 1; 
                }
                else{
                    flag[j] = 0; 
                }
            }
        }
        while(flag[k] != 0){
            k++;
        }
        return nums[k];
    }
}