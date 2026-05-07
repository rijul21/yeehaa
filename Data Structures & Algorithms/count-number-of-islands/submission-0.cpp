class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {

        if(grid.empty())
        return 0;

        int count =0;
        int r= grid.size();
        int c= grid[0].size();

        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
               { 
                if(grid[i][j]=='1')
                {dfs(grid,i,j,r,c);
                count++;}
                }
        }

        return count;
    }

private:
    void dfs(vector<vector<char>>& grid, int i, int j , int r, int c)
    {
        if(i<0 or j<0 or i>=r or j>=c or grid[i][j]=='0')
        return;

        grid[i][j]='0';

        dfs(grid,i+1,j,r,c);
        dfs(grid,i,j+1,r,c);
        dfs(grid,i-1,j,r,c);
        dfs(grid,i,j-1,r,c);
    }
    
};
