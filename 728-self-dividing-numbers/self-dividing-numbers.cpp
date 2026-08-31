class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) 
    {
        vector<int> nums;
        for( int i = left ; i <= right ; i++)
        {
            int n = i ; 
            bool testcase = true ; 
            while( n > 0 )
            {
                int digit = n % 10 ;

                if(digit == 0 || i % digit != 0)
                {
                    testcase = false;
                    break;
                }

                n = n / 10 ;
            }
         if(testcase)
            {
                nums.push_back(i);
            }   
        }
            return nums;    
    }
};
