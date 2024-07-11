class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> stk;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                stk.push(i);
            } else if (s[i] == ')') {
                int j = stk.top();
                stk.pop();
                reverse(s.begin() + j + 1, s.begin() + i);
            }
        }

        string ans;
        for (char ch : s) {
            if (ch != '(' && ch != ')') {
                ans += ch;
            }
        }

        return ans;
    }
};





