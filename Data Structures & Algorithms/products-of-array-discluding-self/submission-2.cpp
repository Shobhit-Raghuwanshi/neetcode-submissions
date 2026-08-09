class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int p = 1;
        
        int z = 0;

        for(int i = 0; i < nums.size() ; i++){
            if(nums[i] != 0){
                // temp = true;
                p = p * nums[i];
            }else{
                z++;
            }
        }

        vector<int> ans;

        

        for(int i = 0; i < nums.size() ; i ++){
            if(z > 1){
                ans.push_back(0);
                continue;
            }
            if(nums[i] == 0){
                ans.push_back(p);
                continue;
            }

            if(z > 0){
                ans.push_back(0);
                continue;
            }

            ans.push_back(p / nums[i]);
        }

        return ans;

    }
};
