class Solution {
public:
    int reverse(int x) 
    {
        int og = x;
        int reversed = 0 ;
        while( og != 0)
        {
            int digit = og % 10 ;
            og = og / 10 ;
            if (reversed > INT_MAX / 10 || reversed == INT_MAX / 10 && digit > 7) 
            {
                return 0;
            }
            if (reversed < INT_MIN / 10 || reversed == INT_MIN / 10 && digit < -8) 
            {
                return 0;
            }
            reversed = ( reversed * 10 ) + digit ;
        }
    return reversed ;    
    }
};


/***
long long reversed_num = 0;

        while (x != 0)
        {
            long long digit = x % 10;
            x = x / 10;

            reversed_num = reversed_num * 10 + digit;
        }

        return reversed_num;
 ***/