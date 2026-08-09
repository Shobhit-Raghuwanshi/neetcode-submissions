class Solution {
public:
    int carFleet(int target, vector<int>& p, vector<int>& s) {
        vector<pair<int,int>> vec;

        for(int i = 0 ; i < p.size() ; i++){
            vec.push_back({p[i],s[i]});
            
        }
        



        sort(vec.begin() , vec.end());

        // cout<<endl;

        for(int i = 0 ; i < vec.size() ; i++){
            // cout<<vec[i].first <<" "<<vec[i].second<<" ,";
        }
        // cout<<endl;


        int ans = 0;

        for(int i = vec.size()-1; i >= 0 ; ){
            if(i < 0){
                return ans;
            }
            double sec = (double(target - vec[i].first)/(double) vec[i].second); 

            int a = vec[i].first;
            int b = vec[i].second;

            cout<<i <<" "<<sec<<","<<endl;
            while(true){
                if(i < 0 || (vec[i].second * sec) + vec[i].first < b*sec + a){
                    break;
                }
                // cout<<i<<" ";
                i = i-1;
            }
            // cout<<endl;

            
            ans = ans+1;
        }

        return ans;


    }
};
