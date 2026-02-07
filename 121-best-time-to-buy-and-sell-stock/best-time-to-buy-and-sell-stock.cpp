class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxp=0;
        int bb=prices[0];
        
        for(int i=1 ; i< prices.size(); i++){
            if(prices[i]>bb){
                maxp=max(maxp, prices[i]-bb);
            }
            bb= min(bb, prices[i]);
        }
        return maxp; //O(n) complexity 
        
    }
};