class Solution {
public:

    int binary_serch(vector<int> vec, int key){
        int lo = 0; 
        int hi = vec.size()-1;
        int mid = -1;
        while(lo < hi){
            int mid = lo + (hi-lo)/2;

            if(vec[mid] > key){
                hi = mid-1;
            }else if(vec[mid] < key){
                lo = mid+1;
            }else{
                return mid;
            }

        }

        return mid;
    }

    vector<vector<int>> threeSum(vector<int>& vec) {

        sort(vec.begin() , vec.end());

        vector<vector<int>> ans;
         
        for(int k = 0 ; k < vec.size() ;){
            int i = k+1;
            int j = vec.size()-1;
            
            while(i < j){
                if(vec[i] + vec[j] < -vec[k]){
                    i++;
                }else if(vec[i] + vec[j] > -vec[k]){
                    j--;
                }else{
                    ans.push_back({vec[k],vec[i], vec[j]});
                    i++;
                    j--;
                    while(vec[i] == vec[i-1]){
                        i++;
                    }
                    while(vec[j] == vec[j+1]){
                        j--;
                    }     
                }
            }
            k++;
            while(vec[k] == vec[k-1]){
                k++;
            }
        }

        return ans;

        
    }










};
