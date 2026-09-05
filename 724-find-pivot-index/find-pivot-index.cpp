class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
        int left_sum = 0 ; 
        int right_sum = 0 ; 
        int total_sum = 0 ;
        for( int i = 0 ; i < nums.size() ; i++)
        {
            total_sum += nums[i];
        }
        for( int j = 0 ; j < nums.size() ; j++)
        {
            right_sum = total_sum - left_sum - nums[j] ;
            if( left_sum == right_sum)
            {
                return j;
            }
            left_sum += nums[j];
        }

    return - 1;
    }
};


/***
for( int i = 0 ; i < nums.size() ; i++)
        {
            // lets assume the pivot start from 1st index
            //when pivot_index is 1st element ..left sum is 0
            left_sum += nums[i];
            pivot_index++;
        }
        for( int j = nums.size() ; j >=pivot_index ; j--)
        {
            right_sum = nums[j];
        }

        if( left_sum == right_sum )
        {
            return pivot_index;
        }
    return -1 ; 
    ***/