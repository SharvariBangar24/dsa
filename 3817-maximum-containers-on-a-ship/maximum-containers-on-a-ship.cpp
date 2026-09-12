class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) 
    {
        int count = 0 ;
        for( int i = 1 ; i <= n * n ; i++ )
        {
            if( i * w <= maxWeight)
            count++ ; 
            else 
            break;
        }
    return count;    
    }
};


/***
        for( int i = 0 ; i<= maxWeight ; i++)
        {
            // n*n cargo ... n * w < = weight
            while( n * w < maxWeight)
            {
                count += 1;
            }
        }
    ***/