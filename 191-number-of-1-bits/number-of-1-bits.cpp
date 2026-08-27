/***class Solution {
public:
    int hammingWeight(int n) 
    {
        int freq = 0 ;
        while( n > 0 )
        {
            if(n % 2 == 1)
            {
                freq += 1;
            }
            n = n/2;
        };
    return freq ;    
    }
};***/

//gpt method 
class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;

        while (n > 0) {
            count += n & 1;
            //check n & 1 ..this will consider the last bit 
            n = n >> 1;
            // shifts the bits to the right 
        }

        return count;
    }
};