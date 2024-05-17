class Solution {
public:
    void reverse(vector<char>& v){
        int i,j;
        char temp;
        for(int i = 0,j = v.size()-1; i < j; i++,j--){
            temp = v[i];
            v[i] = v[j];
            v[j] = temp;
        }
    }
    string reversePrefix(string word, char ch) {
        vector<char> v;
        int flag = 0;
        for(int i = 0; i < word.length(); i++){
            v.push_back(word[i]);
            if(word[i] == ch && flag == 0){
                reverse(v);
                flag = 1;
            }
        }
        string str(v.begin(),v.end());
        return str;
    }
};