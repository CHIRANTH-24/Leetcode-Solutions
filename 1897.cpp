#include<map>
class Solution {
public:
    bool makeEqual(vector<string>& words) {
        map<char,int> m;
        int a = words.size();
        for(int i = 0 ; i < a; i++){
            string s = words[i];
            for(int j = 0; j < words[i].length(); j++){
                m[s[j]]++;
            }
        }
        for(auto i : m){
            if(i.second % a != 0){
                return false;
            }
        }
        return true;
    }
};