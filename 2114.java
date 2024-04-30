class Solution {
    public int mostWordsFound(String[] sentences) {
        int[] arr = new int[sentences.length];
        int count = 0;
        for(int i = 0; i < sentences.length; i++){
           
            for(int k = 0; k < sentences[i].length(); k++){
                if(sentences[i].charAt(k) == ' '){
                    arr[i] = ++count;
                }
            }
            count = 0;
        }
        Arrays.sort(arr);
        return arr[arr.length - 1] + 1;
    }
}