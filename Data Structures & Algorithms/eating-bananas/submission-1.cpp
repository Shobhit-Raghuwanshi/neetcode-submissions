class Solution {
public:

    int help(vector<int> & vec , int a){
        int ans = 0;
        for(int i = 0 ; i < vec.size() ; i++){
                 
            ans += vec[i]/a;

            if(vec[i] % a != 0){
                 ans++;
            }
        }

        return ans;
    }

    int minEatingSpeed(vector<int>& vec, int h) {
        
        int lo = 1;
        int hi = vec[0];
        
        for(int i = 0; i < vec.size(); i++){
            hi = max(hi, vec[i]);
            lo = min(lo, vec[i]);
        }

        while(lo <= hi){
            int mid = lo + (hi-lo)/2;

            int ans = help(vec, mid);

            if(ans > h){
                lo = mid+1;
            }else{
                hi = mid-1;
            }
        }

        // cout<<lo<<" "<<hi<<endl;

        return lo;



    }
};
