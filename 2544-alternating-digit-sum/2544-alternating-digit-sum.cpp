
class Solution {
public:
    int alternateDigitSum(int n)
    {
        int temp=n;
        int digits=0;
        while(temp>0)
        {
            digits++;
            temp=temp/10;
        }
        int sum=0;
        int sign=1;
        if(digits%2==0)
            sign=-1;
        while(n>0)
        {
            int digit=n%10;
            sum=sum+digit*sign;
            sign=sign* -1;
            n=n/10;
        }
        return sum;
    }
};

/***
int temp = n ;
int sum = 0 ;
int digits = 0 ;
int sign = 0 ;
while( temp > 0 )
{
    digits++ ;
    temp = temp / 10 ;
}
if( digits % 2 == 0)
{
    sign = -1;
}
while(n > 0 )
{
    int digit = n % 10 ;
    sum += digit * sign;
    sign = sign * -1;
    n = n / 10 ;
}
return sum ;
***/