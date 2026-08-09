class Solution {
public:

    int search(vector<int>& vec, int key) {
        int lo = 0;
        int hi = vec.size()-1;

        while(lo <= hi){
            int mid = lo + (hi-lo)/2;
            if(vec[mid] > key){
                hi = mid-1;
            }else if(vec[mid] < key){
                lo = mid+1;
            }else{
                return mid;
            }
        }

        return -1;
    }
};
