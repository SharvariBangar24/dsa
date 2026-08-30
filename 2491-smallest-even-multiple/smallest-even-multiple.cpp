class Solution {
public:
    int smallestEvenMultiple(int n)
    {
        //to check multiple of 2 nd n
        for( int i = 2 ; i <= n ; i++)
        {
            if( n%2 == 0)
            {
                // if n is even
                return n ;
            }
        }
    return n*2;   
    }
};