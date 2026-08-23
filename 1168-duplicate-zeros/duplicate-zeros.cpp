class Solution {
public:
    void duplicateZeros(vector<int>& arr) 
    {
        vector<int> unique;
        for(int i = 0 ; i < arr.size() ; i++)
        {
            unique.push_back(arr[i]);
        if(arr[i]==0)
        {
            unique.push_back(0);
        }
        }
        //now copy back only og size 
        for(int i = 0 ; i < arr.size() ; i++)
        {
            arr[i] = unique[i];
        }
    }
};




