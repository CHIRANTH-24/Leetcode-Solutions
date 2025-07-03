class Solution {
    public:
        char kthCharacter(int k) {
            string s = "a";
            while(s.length() < k){
                string n = "";
                for(int i = 0;i < s.length(); i++){
                    n += s[i] + 1;
                }
                s += n;
            }
            return s[k-1];
        }
    };