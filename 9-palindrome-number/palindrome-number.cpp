class Solution {
public:
    bool isPalindrome(int x) 
    {
        int og = x;
        int reversed = 0; 
        //negative nums aint allowed 
        if (x < 0) 
        {
             return false;
        }

        while(x!=0)
        {
            int lastdigi = x % 10;

            //overflow error
            if (reversed > INT_MAX / 10) 
            {
                return false;
            }

            reversed = (reversed * 10 ) + lastdigi ;
            x = x / 10 ;
        }
        return og == reversed;
    }
};