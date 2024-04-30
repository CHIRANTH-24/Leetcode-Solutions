class Solution {
    public int differenceOfSum(int[] nums) {
        int es = 0;
        int ds = 0;
        int n,rem;
        for(int i = 0; i < nums.length; i++){
            es = es + nums[i];
            n = nums[i];
            while(n != 0){
                rem = n % 10;
                ds = ds + rem;
                n = n / 10;
            }
        }
        if(ds < es){
            return es - ds;
        }
        return ds - es;
    }
}