class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {

        int n=prices.size();

        sort(prices.begin(),prices.end());
        int cost=prices[0]+prices[1];

        if(money-cost>=0)
        return money-cost;

        return money;
        
    }
};