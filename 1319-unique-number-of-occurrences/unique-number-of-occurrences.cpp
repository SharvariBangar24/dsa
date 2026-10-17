class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) 
    {
        map<int , int > uni_ocr ;
        map<int , int > occur;
        for( int i = 0 ; i < arr.size() ; i++)
        {
            uni_ocr[arr[i]]++;
        }
        for( auto it : uni_ocr )
        {
            if(occur[it.second] > 0 )
            {
                return false;
            }
            occur[it.second]++;
        }
    return true;
    }
};