class Solution {
public:
    int findMiddleIndex(vector<int>& nums) 
    {
        int left_sum = 0 ; 
        int right_sum = 0 ; 
        int total_sum = 0 ;

        //calculate total sum 1st 
        for( int i = 0 ; i < nums.size() ; i++)
        {
            total_sum += nums[i];
        }

        for( int j = 0 ; j < nums.size() ; j++)
        {
            // isme we dont want to include the middle index in either of the sums ..so delete that 
            right_sum = total_sum - left_sum - nums[j];
            if( right_sum == left_sum)
            {
                return j ;
            }
            left_sum += nums[j];
        }
    return -1;    
    }
};