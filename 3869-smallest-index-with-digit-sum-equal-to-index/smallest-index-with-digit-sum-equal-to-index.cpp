class Solution {
public:
    int smallestIndex(vector<int>& nums) 
    {
        for( int i = 0 ; i < nums.size() ; i++ )
        {
            int sum = 0 ;
            //To calculate the sum of all digits, you need a loop:
            int n = nums[i];
            while ( n > 0 )
            {
            int digit = n % 10 ;
            sum += digit;
            n = n / 10 ;
            }
            if( sum == i)
            {
                return i;
            }
        }

    return -1;    
    }
};