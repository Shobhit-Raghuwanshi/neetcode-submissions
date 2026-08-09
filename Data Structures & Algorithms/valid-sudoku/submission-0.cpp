class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& vec) {
        for(int i = 0 ; i < vec.size() ; i++){
            unordered_set<char> s;
            int a = 0;
            for(int j = 0 ; j < vec[i].size() ; j++){
                if(vec[i][j] != '.'){s.insert(vec[i][j]);
                a++;}
            }

            if(s.size() != a){
                return false;
            }
        }

        for(int i = 0 ; i < vec.size() ; i++){
            unordered_set<char> s;
            int a = 0;
            for(int j = 0 ; j < vec[i].size() ; j++){
                if(vec[j][i] != '.'){s.insert(vec[j][i]);
                a++;}
            }

            if(s.size() != a){
                return false;
            }
        }

        for(int i = 0 ; i < 9; i = i+3){
            for(int j = 0 ; j < 9; j = j +3){

                unordered_set<char> s;
                int a = 0;

                for(int k = i ; k < i+3; k++){
                    
                    for(int l = j ; l < j + 3; l++){
                        if(vec[k][l] != '.'){s.insert(vec[k][l]);
                          a++;}
                    }
                }

                if(s.size() != a){
                    return false;
                }
            }
        }

        return true;
    }
};
