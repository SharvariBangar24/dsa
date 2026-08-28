class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) 
    {
        if (nums.size() < 3)
        {
            // agar bas 1 ya 2 hi elements hai
            return -1;
        }
        int min = nums[0];
        int max = nums[0];
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] < min)
            {
                min = nums[i];
            }

            if (nums[i] > max)
            {
                max = nums[i];
            }
        }

        //neither min nor max
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != min && nums[i] != max)
            {
                return nums[i];
            }
        }

        return -1;
    }
};