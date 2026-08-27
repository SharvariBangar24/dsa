class Solution {
public:
    int hammingWeight(int n) 
    {
        int freq = 0 ;
        while( n > 0 )
        {
            if(n % 2 == 1)
            {
                freq += 1;
            }

            n = n/2;
        };
    return freq ;    
    }
};