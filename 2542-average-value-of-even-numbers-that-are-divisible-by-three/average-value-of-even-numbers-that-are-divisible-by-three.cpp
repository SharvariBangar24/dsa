class Solution {
public:
    int averageValue(vector<int>& nums) 
    {
        int divi_sum = 0 ;
        int count= 0 ;
        int avg_of_3 = 0;
        for( int i = 0 ; i < nums.size() ; i++)
        {
            if( nums[i] % 2 == 0)
            {
                //even numbers
                if ( nums[i] % 3 == 0)
                {
                    count++ ;
                    divi_sum += nums[i];
                    avg_of_3 = divi_sum / count ;
                }
            }
        }
    return avg_of_3;
    }
};