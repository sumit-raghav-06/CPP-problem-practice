class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int max_cost = 100000;
        vector<int> freq(max_cost + 1,0);
        for(int i = 0; i < costs.size(); i++){
            int priceofthisicec = costs[i];
            freq[priceofthisicec]++;
        }
        int icecreamcnt = 0;
        for(int price = 1; price <= max_cost; price++){
            if(freq[price] == 0){
                continue;
            }
            if(coins < price){
                break;
            }
            int buy= min(freq[price], coins/price);
            icecreamcnt += buy;
            coins -= (buy * price);
        }
        return icecreamcnt;

    }
};
