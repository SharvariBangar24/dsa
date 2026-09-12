class Solution {
public:
    bool isPalindrome(string s) 
    {
        //using 2 pointer approach ..also must skip spaces and numeric nums 
        int left = 0 ;
        int right  = s.size() - 1 ;
        while( left < right )
        {
        if( ! isalnum(s[left]))
        {
            left++;
            continue ;
        }
        if( ! isalnum(s[right]))
        {
            right--;
            continue ;
        }
            if(tolower(s[ left ] ) != tolower(s[ right ] ))
            return false;

            left++ ;
            right--;
        }
    return true;
    }
};

/***
        int left = 0 ;
        int right  = s.size() - 1 ;
        while( left < right )
        {
            if( s[ left ] != s[ right ])
            return false;

            left++ ;
            right--;
        }
    return true;

***/