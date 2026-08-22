class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        int longest_jump =  0;
        for(int i = 0; i < nums.size(); i++)
        {
            if( i > longest_jump)
            {
                return false; 
            }

            longest_jump = max(longest_jump ,i + nums[i]);
        }   
    return true;
    }
};