class Solution {
public:
    double average(vector<int>& salary) 
    {
        int n = salary.size() ; 
        long long max = INT_MIN ;
        long long min = INT_MAX;
        double avg = 0 ;
        long long sum = 0 ;

        for( int i = 0 ; i < n ; i++)
        {
            if(salary[i] > max)
            {
                max = salary[i];
            }
            if( salary[i] < min)
            {
                min = salary[i];
            }
        sum += salary[i]  ;
        }
        avg = (double)(sum - min - max ) / ( n - 2 );
    return avg;    
    }
};