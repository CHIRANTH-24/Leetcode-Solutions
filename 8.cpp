class Solution {
public:
    int myAtoi(string s) {
        int k = 0;
        int num = 0;
        int sign = 1;
        while (k < s.size() && s[k] == ' ') {
            k++;
        }
        if (k < s.size() &&  s[k] == '-') {
                sign = -1;
            k++;
        }
        while (k < s.size() && isdigit(s[k])) {
            int digit = s[k] - '0';
            if (num * 10 + digit > INT_MAX ) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }
            num = num * 10 + digit;
            k++;
        }
        return num * sign;
    }
};