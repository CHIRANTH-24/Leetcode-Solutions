class Solution {
    public List<Integer> findWordsContaining(String[] words, char x) {
        List a = new ArrayList();
        for(int i =0; i < words.length; i++){
            String str = new String(words[i]);
            int k = 0;
            while(k < str.length()){
                char c = str.charAt(k);
                if(c == (x)){
                    a.add(i);
                    break;
                }
                k++;
            }
        }
        return a;
    }
}