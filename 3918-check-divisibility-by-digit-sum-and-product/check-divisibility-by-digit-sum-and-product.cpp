class Solution {
public:
    bool checkDivisibility(int n) 
    {
        int og = n ;
        //to check its divisiblity
        int sum_of_digits = 0 ;
        int pro_of_digits = 1 ;
        while( n > 0 )
        {
        int digits = n % 10 ;
        sum_of_digits += digits;
        pro_of_digits *= digits;
        n = n / 10;
        }
        int tocheck = sum_of_digits + pro_of_digits;
        if( og % tocheck == 0 )
        {
            return true;
        }
    return false;    
    }
};