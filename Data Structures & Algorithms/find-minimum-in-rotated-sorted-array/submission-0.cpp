class Solution {
public:
    int findMin(vector<int> &vec) {
        int lo = 0;
        int hi =vec.size() - 1;

        while(lo < hi){
            int mid = lo + (hi-lo)/2;

            if(vec[mid] > vec[hi] && vec[mid] > vec[lo]){
                lo = mid;
            }else if(vec[mid] < hi && vec[mid] < vec[lo]){
                hi = mid;
            }else{
                break;
            }
        }

        // cout<<hi<<" "<<lo<<endl;
        return min(vec[lo] , vec[hi]);

    }
};
