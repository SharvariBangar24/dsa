class Solution {
public:
    int subtractProductAndSum(int n)
    {
        int product = 1 ; 
        int sum = 0 ; 
        while (n > 0)
        {
            int digits = n % 10 ;
            sum += digits ;
            product *= digits ;
            n = n / 10;
        }
        int difference = 0 ;
        difference = product - sum ;
    return difference ;   
    }
};