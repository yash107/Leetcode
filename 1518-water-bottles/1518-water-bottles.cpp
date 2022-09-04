class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
      int n=numBottles;
        while(numBottles>=numExchange){
          numBottles-=numExchange;
          numBottles++;
          n++;
        }
      return n;
    }
};