class Solution {
public:
    int extractSum(int n) {
        int sum = 0;
        while (n != 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

    int getLucky(string s, int k) {
        string num = "";
        for (char c : s) {
            num += to_string(c - 'a' + 1);
        }

        int sum = 0;
        for (char c : num) {
            sum += c - '0';
        }

        for (int i = 1; i < k; i++) {
            sum = extractSum(sum);
        }

        return sum;
    }
};

