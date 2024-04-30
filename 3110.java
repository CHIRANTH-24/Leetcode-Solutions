class Solution {
    public int scoreOfString(String s) {
      int[] array = new int[s.length()+1];
      int ans = 0;
      int a,b;
      for(int i = 0; i < s.length()-1; i++){
        a =  s.charAt(i);
        b =  s.charAt(i+1);
        if(a > b){
            array[i] = a - b;
        }
        else{
            array[i] = b - a;
        }
      }
      for(int i = 0; i <array.length; i++){
        ans = array[i] + ans;
      }  
      return ans;
    }
}