class Solution {
public:
    int dominantIndex(vector<int>& nums) 
    {
        int max_num = 0;
        int max_num_index = 0;
        for(int i = 0 ; i < nums.size() ; i++ )
        {
            if( nums[i] > max_num)
            {
                max_num = nums[i];
                max_num_index = i;
            }
        }
        for(int i = 0 ; i < nums.size() ; i++ )
        {
            if( max_num < (2 * nums[i]) && i != max_num_index)
            {
                return -1;
            }
        }
    return max_num_index ;   
    }
};