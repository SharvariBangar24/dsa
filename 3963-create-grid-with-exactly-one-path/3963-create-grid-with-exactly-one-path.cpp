class Solution {
public:
    vector<string> createGrid(int m, int n) 
    {
        // create a grid with all # 1st 
        vector<string> grid(m, string(n, '#'));
        for (int j = 0; j < n; j++) 
        {
            grid[0][j] = '.';
            // 1st row all . 
        }

        for(int i = 0 ; i < m ; i++)
        {
            grid[i][n - 1] = '.' ;
        }

    return grid ;   
    }
};