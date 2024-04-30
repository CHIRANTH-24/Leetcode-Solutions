class Solution {
    public boolean canMakeArithmeticProgression(int[] arr) {
        int temp;
        int flag = 0;
        for(int i = 0; i < arr.length; i++){
            for(int j = 0; j < arr.length; j++){
                if(arr[i] > arr[j]){
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        temp = arr[0] - arr[1];
        for(int j = 0; j < arr.length - 1; j++){
            if(arr[j] - arr[j+1] != temp){
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        return true;
        else
        return false;
    }
}