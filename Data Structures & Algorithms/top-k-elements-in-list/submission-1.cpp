class Solution {
public:

    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;

        for(int i = 0 ; i < nums.size() ; i++){
            mp[nums[i]]++;
        }
        vector<int> ans;

        vector<pair<int,int>> vec;

        for(auto it = mp.begin() ; it!= mp.end() ; it++){
            vec.push_back({it->second , it->first});
        }

        sort(vec.begin() , vec.end() );

        reverse(vec.begin() , vec.end());

        for(int i = 0; i < min (int(vec.size()) , k) ; i++){
            ans.push_back(vec[i].second);
        }

        return ans;
    }
};
