
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,bool> m;
        int count = 0;
        for(int i = 0; i < jewels.size(); i++){
            m[jewels[i]] = true; 
        }
        for(int j = 0; j < stones.size(); j++){
            if(m[stones[j]] == true){
                count++;
            }
        }
        return count;
    }
};