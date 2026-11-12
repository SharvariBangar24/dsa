
class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) 
    {
        int strictly_inc = 1, strictly_dec = 1;
        int ans = 1;

        for(int i = 0; i < nums.size() - 1; i++)
        {
            if(nums[i + 1] > nums[i])
            {
                strictly_inc++;
                strictly_dec = 1;
            }
            else if(nums[i + 1] < nums[i])
            {
                strictly_dec++;
                strictly_inc = 1;
            }
            else
            {
                strictly_inc = 1;
                strictly_dec = 1;
            }

            ans = max(ans, max(strictly_inc, strictly_dec));
        }

        return ans;
    }
};
