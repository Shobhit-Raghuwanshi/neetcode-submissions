class Solution {
public:
    int largestRectangleArea(vector<int>& vec) {
        vector<int> left(vec.size() , vec.size());
        vector<int> right(vec.size() , -1);

        stack<pair<int,int>> st;

        for(int i = 0; i < vec.size() ; i++){
            if(st.empty()){
                st.push({vec[i] , i});
                continue;
            }

            while(!st.empty() && st.top().first > vec[i]){
                left[st.top().second] = i;
                st.pop();
            }

            st.push({vec[i] , i});

        }

        while(!st.empty()){
            st.pop();
        }

        for(int i = vec.size()-1 ; i >= 0 ; i--){
            if(st.empty()){
                st.push({vec[i] , i});
                continue;
            }

            while(!st.empty() && st.top().first > vec[i]){
                right[st.top().second] = i;
                st.pop();
            }

            st.push({vec[i] , i});
        }

        int ans = 0;

        for(int i = 0 ; i < right.size(); i++){
            ans = max(ans , vec[i] * (left[i] - right[i] - 1));
        }
        // cout<<endl;

        // for(int j = 0; j < right.size() ; j++){
        //     cout<<left[j] <<" ";
        // }

        // cout<<endl;

        return ans;
    }
};
