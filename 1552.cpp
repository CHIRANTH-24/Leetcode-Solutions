class Solution {
public:
    bool canWePlace(vector<int>& position, int distance, int balls) {
        int ball_count = 1;
        int last_ball = position[0];
        for (int i = 1; i < position.size(); i++) {
            if (position[i] - last_ball >= distance) {
                ball_count++;
                last_ball = position[i];
            }
            if (ball_count >= balls) {
                return true;
            }
        }
        return false;
    }

public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int low = 0;
        int ans = 0;
        int high = position[position.size() - 1] - position[0];
        int mid;
        while(low <= high){
            mid = low + (high - low) / 2;
            if(canWePlace(position, mid, m) == true){
                ans = mid;
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return high;
    }
};