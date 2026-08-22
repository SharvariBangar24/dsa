class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums)
    {
        vector<int> missing_nums ; 
        set<int> Seenset;
        for(int i = 0; i < nums.size(); i++)
        {
            Seenset.insert(nums[i]);
        }

        for(int i = 1 ; i <= nums.size() ; i++ )
        {
           if(Seenset.find(i) == Seenset.end())
           {
            //number isnt found
            missing_nums.push_back(i);
           }
        }
    return missing_nums;   
    }
};