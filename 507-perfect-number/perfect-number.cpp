class Solution {
public:
    bool checkPerfectNumber(int num) 
    {
        int sum = 0;
        for( int i = 1 ; i <= num/2 ; i++)
        {
            // we go only till half cuz after that it starts repeating 
            if(num % i == 0)
            {
                sum += i;
            }
        }
        if( sum == num)
        {
            return true ;
        }
    return false;     
    }
};