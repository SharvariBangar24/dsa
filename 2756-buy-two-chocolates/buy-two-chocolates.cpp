class Solution {
public:
    int buyChoco(vector<int>& prices, int money) 
    {
        int curr_cost = 0 ;
        sort(prices.begin(),prices.end());
        for( int i = 0 ; i < prices.size() ; i++)
        {
            curr_cost = prices[1] + prices[0];
        }
        if(money >=curr_cost )
        {
                return money-curr_cost;
        }



     return money;   
    }
};