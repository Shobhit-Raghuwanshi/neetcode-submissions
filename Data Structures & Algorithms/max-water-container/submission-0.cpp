class Solution {
public:
    int maxArea(vector<int>& vec) {
        int i = 0;
        int j = vec.size()-1;
        int ans = 0;
        while(i < j){
            ans = max(ans , min(vec[i], vec[j])*(j - i));
            if(vec[i] > vec[j]){
                j--;
            }else{
                i++;
            }
        }

        return ans;

    }
};
