class Solution {
public:
    bool searchMatrix(vector<vector<int>>& vec, int key) {
        
        int i = 0;
        int j = 0;

        int lo = 0;
        int hi = vec.size()-1;

        while(lo <= hi){
            int mid = lo + (hi-lo)/2;
            if(vec[mid][j] < key){
                lo = mid+1;
            }else if(vec[mid][j] > key){
                hi = mid-1;
            }else{
                return true;
            }
        }

        if(hi < 0){
            return false;
        }

        i = hi;

        // cout<<i<<endl;

        lo = 0;
        hi = vec[i].size()-1;

        while(lo <= hi){
            int mid = lo + (hi-lo)/2;
            if(vec[i][mid] > key){
                hi = mid-1;
            }else if(vec[i][mid] < key){
                lo = mid+1;
            }else{
                return true;
            }
        }

        return false;


    }
};
