class Solution {
    public int sumOfSquares(int[] nums) {
        int[] n = new int[nums.length];
        int j = 0;
        int sum = 0;
        for(int i = 0; i < nums.length; i++){
            if((nums.length % (i+1)) == 0){
                n[j++] = nums[i];
            }
        }
        for(int k = 0; k <n.length; k++){
            sum = sum + (n[k] * n[k]);
        }
        return sum;
    }
}