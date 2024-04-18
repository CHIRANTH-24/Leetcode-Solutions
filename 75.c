void sortColors(int* nums, int numsSize) {
    int temp;
    for(int i = 0; i < numsSize; i++){
        for(int j = 0; j < numsSize; j++){
            if(nums[i] < nums[j]){
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
}