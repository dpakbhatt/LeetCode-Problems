class Solution {
public:
    int island(vector<vector<int>>&g,int i,int j)
    {
        int p=0;
        if(i-1 < 0)
            p++;
        else
            if(g[i-1][j] == 0)
                p++;

        if(i+1 >= g.size())
            p++;
        else
            if(g[i+1][j] == 0)
                p++;

        if(j+1 >= g[i].size())
            p++;
        else
            if(g[i][j+1] == 0)
                p++;

        if(j-1 < 0)
            p++;
        else
           if(g[i][j-1] == 0)
                p++;

        return p;
    }

    int islandPerimeter(vector<vector<int>>& grid) {
        int k, n=0;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[i].size(); j++){
                if(grid[i][j] == 1){
                    k = island(grid,i,j);
                    n = n + k;
                }
            }
        }
        return n;
    }
};
