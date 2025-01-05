//GPT:
class Solution {
public:
  string shiftingLetters(string s, vector<vector<int>>& shifts) {
    int n = s.size();
    vector<int> delta(n + 1, 0); // Difference array to track shifts

    // Apply shifts to the difference array
    for (const auto& shift : shifts) {
        int start = shift[0], end = shift[1], direction = shift[2];
        if (direction == 1) { // Forward shift
            delta[start] += 1;
            delta[end + 1] -= 1;
        } else { // Backward shift
            delta[start] -= 1;
            delta[end + 1] += 1;
        }
    }

    
    vector<int> net_shift(n, 0);
    int shift = 0;
    for (int i = 0; i < n; ++i) {
        shift += delta[i];
        net_shift[i] = shift;
    }

   
    for (int i = 0; i < n; ++i) {
        int current_char_pos = s[i] - 'a';
        int new_char_pos = (current_char_pos + net_shift[i] % 26 + 26) % 26; 
        s[i] = 'a' + new_char_pos;
    }

    return s;
}
};