class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        for( int i = 0 ; i < nums.size() ; i++)
        {
            int frequency = 0 ;
            for(int j = 0 ; j < nums.size() ; j++)
            {
                if(nums[i] == nums[j])
                frequency +=1;
            }

            if(frequency > (nums.size() / 2))
            {
                //return that number 
                return nums[i];
            }

        }
    return -1;
    }
};