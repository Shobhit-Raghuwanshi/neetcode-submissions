class Solution {
public:
    int trap(vector<int>& vec) {
        int ans = 0;
        int max = 0;
        int temp = 0;
        int last_idx = -1;
        for(int i = 0 ; i < vec.size(); i++){
            if(max <= vec[i]){
                // cout<<i<<" "<<max<<" "<<vec[i]<<endl;
                ans += temp;
                temp = 0;
                max = vec[i];
                last_idx = i;
            }else{
                
                temp += (max - vec[i]);
                // cout<<"____"<<temp<<endl;
            }
        }

        // cout<<last_idx<<endl;
        max = vec[vec.size()-1];
        temp = 0;
        for(int i = vec.size()-1 ; i >= last_idx; i--){
            if(max <= vec[i]){
                cout<<i<<endl;
                ans += temp;
                temp = 0;
                max = vec[i];
            }else{
                
                temp += (max - vec[i]);
               
            }
        }

        return ans;
    }
};
