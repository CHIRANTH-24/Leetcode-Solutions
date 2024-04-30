class Solution {
    public int[] getSumAbsoluteDifferences(int[] nums) {
        int[] array = new int[nums.length];
        int sum = 0;
        for(int i = 0; i < nums.length ; i++){
            for(int j = 0; j < nums.length ; j++){
                if(nums[i] < nums[j]){
                    sum += nums[j] - nums[i];
                }
                if(nums[i] >= nums[j]){
                    sum += nums[i] - nums[j];
                }
            
            }
            array[i] = sum;
            sum = 0;
        }
        return array;
    }
}