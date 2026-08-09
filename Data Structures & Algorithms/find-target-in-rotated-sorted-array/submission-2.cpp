class Solution {
public:

    int b_s(vector<int>& vec, int key , int lo , int hi) {

        
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

    int search(vector<int>& vec, int key) {
        int lo = 0;
        int hi = vec.size()-1;

        while(lo < hi){
            int mid = lo + (hi-lo)/2;

            if(vec[mid] > vec[hi] && vec[mid] > vec[lo]){
                lo = mid;
            }else if(vec[mid] < vec[lo] && vec[mid] < vec[hi]){
                hi = mid;
            }else{
                break;
            }

        }

        // cout<<lo<<" "<<hi<<endl;

        if(lo +1 != hi){
return b_s(vec, key , 0, vec.size()-1);
        }

        
        int a = b_s(vec, key , 0, lo);
        

        if(a != -1){
            return a;
        }

        return b_s(vec, key , hi, vec.size()-1);


    }
};
