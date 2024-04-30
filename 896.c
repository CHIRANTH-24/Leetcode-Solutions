bool isMonotonic(int* nums, int numsSize) {
    int fi = 0;
        int fd = 0;
        int fs = 0;
        for(int i = 0; i < numsSize-1; i++){
            if(nums[i] >= nums[i+1]){
                fi = 1;
            }
            if(nums[i] < nums[i+1]) {
                fi = 0;
                break;
            }
            
        }
        for(int j = 0; j < numsSize - 1; j++){
            if(nums[j] <= nums[j+1]){
                fd = 1;
            }
            if(nums[j] > nums[j+1]) {
                fd = 0;
                break;
            }
        }
        for(int i = 0; i < numsSize-1; i++){
            if(nums[i] == nums[i+1]){
                fs = 1;
            }
            else {
                fs = 0;
                break;
            }
            
        }
        if((fi == 1 && fd == 0) || (fi == 0 && fd == 1) || (fs = 1)){
            return true;
        }
        else
        return false;
        
}