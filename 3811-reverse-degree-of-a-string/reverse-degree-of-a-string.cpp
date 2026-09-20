class Solution {
public:
    int reverseDegree(string s)
    {
        int sum = 0 ;
        int alpha_pos = 0 ;
        int alpha_sum = 0 ;
        for( int i = 0 ; i < s.length() ; i++)
        {
            alpha_pos = 'z' - s[i] + 1;
            alpha_sum = alpha_pos * (i + 1 ) ;
            sum += alpha_sum;
        }
    return sum ;    
    }
};