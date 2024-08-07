class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int, int>> jobs;
        for (int i = 0; i < difficulty.size(); i++) {
            jobs.emplace_back(difficulty[i], profit[i]);
        }
        sort(jobs.begin(), jobs.end());
        sort(worker.begin(), worker.end());
        int maxProfit = 0;
        int best = 0;  
        int j = 0;  
        for (int i = 0; i < worker.size(); i++) {
            while (j < jobs.size() && worker[i] >= jobs[j].first) {
                best = max(best, jobs[j].second);
                j++;
            }
            maxProfit += best;
        }
        return maxProfit;
    }
};
