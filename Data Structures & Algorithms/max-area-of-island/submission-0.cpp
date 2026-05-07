class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {

        if(grid.empty())
        return 0;

        int r=grid.size();
        int c=grid[0].size();
        int maxarea=0;

        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]==1)
                {int area=dfs(grid,i,j,r,c);
                maxarea=max(maxarea,area);}
            }
        }
        return maxarea;
    }

private:
    int dfs(vector<vector<int>>& grid, int i, int j, int r, int c)
    {
        if(i<0 or j<0 or i>=r or j>=c or grid[i][j]==0)
        return 0;

        grid[i][j]=0;
        int area=1;

        area=area+dfs(grid,i+1,j,r,c);

        area=area+dfs(grid,i-1,j,r,c);

        area=area+dfs(grid,i,j+1,r,c);

        area=area+dfs(grid,i,j-1,r,c);

        return area;

    }
};
