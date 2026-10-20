class Solution {
public:
    int maximumProduct(vector<int>& nums) 
    {
        int n = nums.size() -1 ;
        sort(nums.rbegin() , nums.rend()) ;
        int ans = nums[0] * nums[1] * nums[2] ;
        int ans1 = nums[0] * nums[n] * nums[n - 1];
    return max(ans , ans1) ;    
    }
};