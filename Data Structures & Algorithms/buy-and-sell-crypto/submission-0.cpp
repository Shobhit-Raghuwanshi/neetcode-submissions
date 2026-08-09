class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int s = 0; 

        int ans = 0 ;
        for(int i = 1; i < prices.size(); i++){
            if(prices[s] < prices[i]){
                ans = max(ans , prices[i]- prices[s]);
            }else{
                s = i;
            }
        }

        return ans;
    }
};
