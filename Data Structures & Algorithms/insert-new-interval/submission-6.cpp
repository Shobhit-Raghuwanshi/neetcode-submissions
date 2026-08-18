class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& vec, vector<int>& newInterval) {

        vector<vector<int>> ans;

        bool flag = true;

        for(int i = 0 ; i < vec.size(); i++){
            if(flag && vec[i][0] == newInterval[0]){
                if(vec[i][1] > newInterval[1]){
                    ans.push_back(newInterval);
                    flag = false;
                }
            }
            else if(flag && vec[i][0] > newInterval[0]){
                ans.push_back(newInterval);
                flag = false;
            }
            ans.push_back(vec[i]);
        }

        if(flag){
            ans.push_back(newInterval);
        }

        vector<vector<int>> arr;

        arr.push_back(ans[0]);

        for(int i = 1; i < ans.size(); i++){
            // cout<<arr[arr.size()-1][0]<<" , "<<arr[arr.size()-1][1]<<endl;
            if(arr[arr.size()-1][1] >= ans[i][0]){
                vector<int> temp = {arr[arr.size()-1][0], max( arr[arr.size()-1][1], ans[i][1])};
                arr.pop_back();
                arr.push_back(temp);
            }else{
                arr.push_back(ans[i]);
            }

            
        }

        return arr;

        
    }
};
