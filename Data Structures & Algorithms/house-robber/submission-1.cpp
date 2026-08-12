class Solution {
public:

    int help(vector<int>& nums , int n , vector<int> &ans){
        if(n < 0){
            return 0;
        }

        if(ans[n] != -1){
            return ans[n];
        }

        return  ans[n] = max(nums[n] + help(nums , n-2, ans) , help(nums , n-1, ans));
    }

    int rob(vector<int>& nums) {
        vector<int> ans(nums.size(), -1);
        return help(nums , nums.size()-1, ans);
    }
};
