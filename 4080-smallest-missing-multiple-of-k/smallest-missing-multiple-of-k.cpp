class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) 
    {
         set<int> s(nums.begin() , nums.end());
        // multiples of k
         int multiple = k ;  // start with that number itslef
         while( s.count(multiple))
         {
            multiple += k ;
         }
         return multiple;
        
    }
};