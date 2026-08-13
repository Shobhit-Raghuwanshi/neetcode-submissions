class Solution {
public:

    vector<int> dir_x = {1,0,-1,0};
    vector<int> dir_y = {0,1,0,-1};

    int dfs(vector<vector<int>>& grid , vector<vector<bool>>& vis, int i, int j){
        
        if(i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size()){
            return 0;
        }

        if(vis[i][j] || grid[i][j] != 1){
            return 0;
        }

        vis[i][j] = true;
        int ans = 1;
        for(int k = 0 ; k < 4; k++){

            ans = ans + dfs(grid, vis , i+dir_x[k], j+dir_y[k]);
        }

        return ans;

    }


    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        vector<vector<bool>> vis (grid.size(), vector<bool>(grid[0].size(), false));

        int ans = 0;

        for(int i = 0 ; i < grid.size(); i++){
            for(int j = 0 ; j < grid[0].size(); j++){
                if(vis[i][j]){
                    continue;
                }
                if(grid[i][j] == 1){
                    ans = max(ans, dfs(grid , vis,  i, j));
                }
            }
        }

        return ans;

    }
};
