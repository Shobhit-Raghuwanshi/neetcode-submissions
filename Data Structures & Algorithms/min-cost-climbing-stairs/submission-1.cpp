class Solution {
public:

    

    int help(vector<int>& cost , int n, vector<int> &ans){
        if(n < 0){
            return 0;
        }
        if(ans[n] != 0){
            return ans[n];
        }
        
        return ans[n] = cost[n] + min(help(cost, n-2, ans) , help(cost, n-1, ans));
    }

    int minCostClimbingStairs(vector<int>& cost) {

        vector<int> ans(cost.size() + 2 , 0);

        if(cost.size() <= 1){
            return cost[0];
        }
        help(cost , cost.size() -1 , ans);

        return min(ans[cost.size() -1], ans[cost.size() -2]);
    }
};
