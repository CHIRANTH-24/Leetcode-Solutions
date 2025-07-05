class Solution {
    public:
        int findLucky(vector<int>& arr) {
            map<int,int>mp;
            vector<int>ans;
            for(int i = 0; i < arr.size(); i++){
                mp[arr[i]]++;
            }
            for(auto it: mp){
                if(it.first == it.second){
                   ans.push_back(it.first);
                }
            }
            if(!ans.empty())
            return ans[ans.size() - 1];
            else
            return -1;
        }
    };