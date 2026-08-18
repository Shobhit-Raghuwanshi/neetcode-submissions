class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& vec) {
        vector<vector<int>> ans; 

        sort(vec.begin(), vec.end());

        ans.push_back(vec[0]);

        for(int i = 0 ; i < vec.size(); i++){
            if(ans[ans.size()-1][1] >= vec[i][0]){
                vector<int> temp = {min(vec[i][0] , ans[ans.size()-1][0]) , 
                max(vec[i][1] , ans[ans.size()-1][1])};

                ans.pop_back();
                ans.push_back(temp);
                continue;    
            }
            ans.push_back(vec[i]);

        }

        return ans;
    }
};
