class Solution {
public:

    vector<int> dirx = {1, 0, -1, 0};
    vector<int> diry = {0, 1, 0, -1};

    void dfs(vector<vector<char>> &vec, vector<vector<int>> &vis, int i , int j){
        if(vis[i][j] > 0 || vec[i][j] != '1'){
            return;
        }
        
        vis[i][j] = 1;

        for(int k = 0 ; k < 4; k++){
            int x = dirx[k];
            int y = diry[k];
            
            

            if(i + x < vec.size() && j + y < vec[i].size() && j + y >= 0 && i + x >= 0 ){
                dfs(vec, vis, i+x, j+y);
            }

        }

        return;


    }


    int numIslands(vector<vector<char>>& vec) {

        int n = vec.size();
        int m = vec[0].size();

        vector<vector<int>> vis(n , vector<int>(m , 0));

        int ans = 0;

        for(int i =0 ; i< n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(vec[i][j] == '1' && vis[i][j] == 0){
                    dfs(vec, vis, i, j);
                    ans++;
                }
            }
        }

        return ans;
        
    }
};
