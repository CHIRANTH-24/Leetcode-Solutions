class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int numDrank = 0;
        int youCanGet = 1;
        int youRemainWith = 0;
        while(youCanGet > 0){
            numDrank += (numBottles - youRemainWith);
            youCanGet = numBottles / numExchange;
            youRemainWith = numBottles % numExchange;
            numBottles = youCanGet + youRemainWith;
        }
        return numDrank;
    }
};