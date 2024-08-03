class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<long long> degree(n);
        long long sum = 0;
        for (int i = 0; i < roads.size(); i++) {
            for (int j = 0; j < roads[i].size(); j++) {
                degree[roads[i][j]]++;
            }
        }
        sort(degree.begin(), degree.end());
        for( int i = 0 ; i < n; i++){
            sum += degree[i] * (i+1); 
        }
        return sum;
    }
};