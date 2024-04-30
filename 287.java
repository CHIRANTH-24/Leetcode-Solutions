class Solution {
    public int findDuplicate(int[] nums) {
        int c = 0;

        for(int i = 0; i < nums.length; i++){
            for( int j = 0; j < nums.length; j++){
                if(nums[i] == nums[j] && i !=j)
                 c = nums[j];
            }
               
            }
        
        return c;
}
}