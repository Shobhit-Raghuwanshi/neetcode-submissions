class Solution {
public:
    vector<int> twoSum(vector<int>& vec, int a) {
        
        int i = 0;
        int j = vec.size() - 1;

        while(i < j){
            if(vec[i] + vec[j] > a){
                j = j-1;
            }else if(vec[i] + vec[j] < a){
                i = i+1;
            }else{
                return {i+1, j+1};
            }
        }

        return {};

    }
};
