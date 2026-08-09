class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& vec) {
        map<string, vector<string>> mp;

        for(int i = 0 ; i < vec.size() ; i++){
            string s = vec[i];
            sort(s.begin() , s.end());
            
            mp[s].push_back(vec[i]);

        }

        vector<vector<string>> ans;

        for(auto it = mp.begin() ; it != mp.end() ; it++){
            ans.push_back(it->second);

        
        }

        return ans;
    }
};
