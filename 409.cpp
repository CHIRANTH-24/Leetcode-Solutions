class Solution {
public:
    int longestPalindrome(string s) {
        int flag = 0;
        int sum = 0;
        map<char,int> m;
        for(int i = 0; i < s.length(); i++){
            m[s[i]]++;
        }
        for(auto i: m){
            if(i.second % 2 == 0){
                sum = sum + i.second;
            }
            else{
                flag = 1;
                sum = sum + (i.second - 1);
            }
        }
    if(flag == 1){
        return sum + 1;
    }
    else{
        return sum;
    }
    }

};