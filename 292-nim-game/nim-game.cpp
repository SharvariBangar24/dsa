class Solution {
public:
    bool canWinNim(int n) 
    {
        // if suppose u take out 1 stone only 
        //if like the number is either 2 or 3 ka multiple 
        if( n <= 3)
        {
            return true;
        }
        if( n % 2 != 0)
        {
            return true;
        }
        if(n % 4 == 0)
        {
            return false;
        }
    return true;    
    }
};