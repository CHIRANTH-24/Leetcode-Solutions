TLE:
// class Solution {
// public:
//     bool isVowel(vector<string>& sent){
//         int size = sent.size();
//         if(sent[0] == "a" || sent[0] == "e" || sent[0] == "i" || sent[0] == "o" || sent[0] == "u"){
//             if(sent[size] == "a" || sent[size] == "e" || sent[size] == "i" || sent[size] == "o" || sent[size] == "u"){
//                 return true;
//             }
//         }
//         return false;
//     }
//     vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
//         vector<int> ans;
//         map<string,bool> mp;
//         for(int i = 0; i < words.size(); i++){
//             if(isVowel(words[i])) mp[i] = true;
//             else mp[i] = false;
//         }
//         int a;
//         for(int i = 0; i < queries.length; i++){
//             int start = queries[i][0];
//             int end = queries[i][1];
//             int count = 0;
//             a = start;
//             while(a < end){
//                 if(mp[words[a]]) count++;
//                 a++;
//             }
//             ans.push_back(count);
//         }
//         return ans;
//     }
// };
GPT:
class Solution {
public:
    bool isVowel(const string& word) {
        int size = word.size();
        if (size == 0) return false; // Handle empty strings
        if ((word[0] == 'a' || word[0] == 'e' || word[0] == 'i' || word[0] == 'o' || word[0] == 'u') &&
            (word[size - 1] == 'a' || word[size - 1] == 'e' || word[size - 1] == 'i' || word[size - 1] == 'o' || word[size - 1] == 'u')) {
            return true;
        }
        return false;
    }

    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = words.size();
        vector<int> prefix(n + 1, 0);

        // Build prefix sum array
        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + (isVowel(words[i]) ? 1 : 0);
        }

        // Process queries
        vector<int> ans;
        for (const auto& query : queries) {
            int start = query[0];
            int end = query[1];
            ans.push_back(prefix[end + 1] - prefix[start]);
        }

        return ans;
    }
};
