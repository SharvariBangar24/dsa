class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) 
    {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int cookie_count = 0 ;
        int i = 0 ; // for kid
        int j = 0 ; // for coookie
        while( i < g.size() && j < s.size() )
        {
                if( g[i] <= s[j])
                {
                    cookie_count++;
                    i++ ; 
                    j++ ;
                }
                else 
                {
                    j++ ; 
                }
        }
    return cookie_count ;    
    }
};

/***
int cookie_count = 0 ; 
        for( int i = 0 ; i < g.size() ; i++)
        {
            for( int j = 0 ; j < s.size() ; j++)
            {
                if( g[i] == s[j])
                {
                    cookie_count++;
                }
            }
        }
    return cookie_count ; 
***/