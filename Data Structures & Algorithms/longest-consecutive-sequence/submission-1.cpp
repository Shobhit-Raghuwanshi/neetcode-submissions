class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.size() == 0){
            return 0;
        }


        map<int, bool> mp;

        for(int i = 0 ; i < nums.size(); i++){
            
            mp[nums[i]] = true;
        }

        int ans = 1;

        for(int i = 0 ; i < nums.size() ; i++){
            int c = 1;
            if(mp[nums[i]-1] == true){
                continue;
            }
            int x = nums[i]+1;

            while(mp[x]){
                c++;
                x++;
            }

            ans = max(c, ans);
        }

        return ans;


    }
};
