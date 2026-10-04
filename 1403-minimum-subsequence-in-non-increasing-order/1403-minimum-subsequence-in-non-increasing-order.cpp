class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) 
    {
        int sum = 0 ; int total_sum = 0 ;
        for( int i = 0 ; i < nums.size() ; i++ )
        {
            total_sum += nums[i];
        }
        sort(nums.rbegin() , nums.rend() ) ;
        vector<int> ans ;
        for( int i = 0 ; i < nums.size() ; i++ )
        {
            sum += nums[i];
            ans.push_back(nums[i]);
            total_sum -= nums[i];
            if( sum >  total_sum) break ;
        }
    return ans ;
        
    }
};