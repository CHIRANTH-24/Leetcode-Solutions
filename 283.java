class Solution {
    public void moveZeroes(int[] nums) {
        int k = 0;
        int temp;
        for(int i = 0; i < nums.length; i++){
            if(nums[i] == 0){
                k = i;
                while(nums[k] == 0 && k < nums.length - 1){
                    k++;
                }
                temp = nums[i];
                nums[i] = nums[k]; 
                nums[k] = temp;

            }
        }
    }
}