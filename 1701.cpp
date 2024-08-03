class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int clock = 0;
        double ans = 0;
        for(int i = 0; i < customers.size(); i++){
            if(clock < customers[i][0]){
                clock = customers[i][0];
            }
            clock += customers[i][1];
            ans += (clock - customers[i][0]);
        }
        return (ans / customers.size());
    }
};