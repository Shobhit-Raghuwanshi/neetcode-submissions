class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& vec) {
        stack<pair<int, int>> st;

        vector<int> ans(vec.size() , 0);

        for(int i = 0; i < vec.size() ; i++){
            // if(st.empty()){
            //     st.push({vec[i] , i});
            //     cont
            // }
            while(!st.empty() && st.top().first < vec[i]){
                ans[st.top().second] =  i - st.top().second;
                st.pop();
            }
            st.push({vec[i] , i});
        }

        return ans;

    }
};
