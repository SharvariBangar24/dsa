class Solution {
public:
    int sumCounts(vector<int>& nums) 
    {
        int n = nums.size() ;
        int distinct_count = 0 ;
        int answer = 0 ;
        for( int i = 0 ; i < n ; i++)
        {
            map<int,int> mp;
            for( int j = i ; j < n ; j++ )
            {
                mp[nums[j]]++;
                int distinct_count = mp.size();
                answer += mp.size() * mp.size();
            }

        }
    return answer;    
    }
};