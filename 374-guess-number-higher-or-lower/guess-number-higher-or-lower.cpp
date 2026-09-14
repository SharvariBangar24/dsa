/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) 
    {
        // basically using binary search 
        long long left = 1 ; 
        long long right = n ; 
        while( left <= right )
        {
            long long  mid  = ( left + right ) / 2 ;

            if( guess(mid) == 0)
            {
                return mid ;
            }
            else if ( guess(mid) == 1 )
            {
                left = mid + 1;
            }
            else if( guess(mid) == -1)
            {
                right  = mid - 1 ;
            }
        }
    return -1 ;    
    }
};

/*** 
isme ab we dontknow the actual num value ..we get it after the api is run ...so u cant directly comapre with the num val 
if( mid == num)
            {
                return mid ;
            }
            else if ( mid < num )
            {
                left = mid + 1;
            }
            else if( mid > num )
            {
                right  = mid - 1 ;
            }
***/