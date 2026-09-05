class Solution {
public:
    bool uniformArray(vector<int>& nums1) 
    {
        bool even_num = false ;
        bool odd_num = false;
        for( int i = 0 ; i < nums1.size() ; i++ )
        {
            if( nums1[i] % 2 == 0 )
            {
                even_num = true;
            }
            else if(nums1[i] % 2 != 0)
            {
                odd_num = true;
            }
        }
        if( even_num == false || odd_num == false)
        {
            return true;
        }
        int smallest_index = *min_element(nums1.begin() , nums1.end());
        if( smallest_index % 2 == 0 )
        {
            return false;
        }
    return true;
    } 
};


/***

        //if basically all numbers are even or odd then return true..else return false
        for( int i = 0 ; i < nums1.size() ; i++) 
        {
            if( nums[i] % 2 == 0)
            {
                return true;
            }
            else if ( nums[i] % 2 != 0)
            {
                return true;
            }
        }
    return false;
    ***/