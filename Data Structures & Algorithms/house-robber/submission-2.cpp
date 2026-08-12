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

        if(nums.size() <= 1){
            return nums[0];
        }

        ans[0] = nums[0];
        ans[1] = max(nums[0] , nums[1]);


        for(int i = 2; i < nums.size(); i++){
            ans[i] = max(nums[i] + ans[i-2] , ans[i-1]);
        }

        return ans[nums.size()-1];
    }
};
