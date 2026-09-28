class Solution {
public:
    int maxDepth(string s) 
    {
        int depth = 0 ; 
        int max_height = 0 ;
        for( int i = 0 ; i < s.length() ; i++)
        {
            if(s[i] == '(')
            {
                depth++ ;
                max_height = max(depth , max_height) ;
            }
            else if( s[i] == ')')
            {
                depth--;
            }
        }
    return max_height;    
    }
};