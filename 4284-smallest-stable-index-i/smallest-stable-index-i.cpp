class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) 
    {
        int score = 0 ;
        for( int i = 0 ; i < nums.size() ; i++ )
        {
            int maximum = *max_element(nums.begin(), nums.begin() + i + 1);
            int minimum = *min_element(nums.begin() + i, nums.end());
            long long score =(long long)maximum - minimum ;
            if( score <= k)
            {
                // stable index
                return i;
            }
        }
        
    return - 1;    
    }
};