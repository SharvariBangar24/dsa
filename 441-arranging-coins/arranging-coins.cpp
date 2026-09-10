class Solution {
public:
    int arrangeCoins(int n) 
    {
        int com_rows = 0 ;
        for( int i = 1 ; i <= n ; i++)
        {
        if ( n >= i )
        {
        n = n - i ;
        com_rows++;
        }
        else 
        {
            break ;
        }
        }
    return com_rows;    
    }
};