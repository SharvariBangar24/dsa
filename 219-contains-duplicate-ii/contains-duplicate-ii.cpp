class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
        //optimized way to solve is by using ordered map 
        unordered_map <int , int > mp ;
        for( int i = 0 ; i < nums.size() ; i++)
        {
            if(mp.find(nums[i]) != mp.end())
            {
                // Have we already seen the current number?
                if( i - mp[nums[i]] <= k )
                {
                    return true;
                }
            }
            mp[nums[i]] = i;
        }

    return false;
    }
};

/***   for( int i = 0 ; i < nums.size() ; i++)
        {
            for( int j = i+1 ; j < nums.size() ; j++)
            {
                if( (nums[i] == nums[j])  && abs(i - j) <= k)
                {
                    return true;
                }>
            }
        }
    return false;    
***/