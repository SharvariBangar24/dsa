class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) 
    {
        //basically find the mid
        int low = 0 ;
        int high = arr.size() - 1 ;
        while( low < high )
        {
                    int mid = (low + high) / 2;
                    if( arr[mid]  <  arr[mid+1])
                    {
                        //shift to the right
                        low = mid + 1;
                    }
                    else
                    {
                        high = mid;
                    }
        }
    return low;
    }
};