class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> ans(nums.size(), 0);
        ans[0] = max(0, nums[0]);

        int a = ans[0];

        int max_int = nums[0];
        for(int i = 1 ; i < nums.size() ; i++){
            ans[i] = max(ans[i-1] + nums[i], 0);

            a = max(a, ans[i]);

            max_int = max(max_int , nums[i]);
        }

        if(a == 0){
            return max_int;
        }

        return a;

    }
};
