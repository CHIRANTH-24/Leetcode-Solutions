#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    int maximumLength(string s) {
        int n = s.size();
        
        for (int len = n; len >= 1; --len) {
            unordered_map<string, int> freq;
            for (int i = 0; i <= n - len; ++i) {
                string sub = s.substr(i, len);
                if (isSpecial(sub)) {
                    freq[sub]++;
                }
            }
         
            for (auto& [key, count] : freq) {
                if (count >= 3) {
                    return len; 
                }
            }
        }
        return -1; 
    }

private:
    
    bool isSpecial(const string& str) {
        char first = str[0];
        for (char c : str) {
            if (c != first) return false;
        }
        return true;
    }
};
