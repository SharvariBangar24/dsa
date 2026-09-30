class Solution {
public:
    int heightChecker(vector<int>& heights) 
    {
        vector<int> ideall_height = heights;
        sort(ideall_height.begin() ,ideall_height.end());
        int count = 0 ;
        for(int i = 0 ; i < ideall_height.size() ; i++)
        {
            if (heights[i] != ideall_height[i])
            {
                count++;
            }
        }
    return count;    
    }
};