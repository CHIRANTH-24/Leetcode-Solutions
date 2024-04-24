class Solution {
    public boolean isPalindrome(int x) {
        int rem;
        int c = x;
        int num = 0;
        while(x != 0 && x > 0){
            rem = x % 10;
            num = rem + 10 * num;
            x = x / 10;  
        }
        if(num == c){
            return true;
        }
        else return false;
    }
}