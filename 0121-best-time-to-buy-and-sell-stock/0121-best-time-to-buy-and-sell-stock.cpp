class Solution {
public:
    int maxProfit(vector<int>& prices) {
    //     int first_iterator, second_iterator;
    //     int temp = 0, max_profit = 0;

    //     for(first_iterator = 0; first_iterator < prices.size() - 1; first_iterator++){
    //         for(second_iterator = first_iterator + 1; second_iterator < prices.size(); second_iterator++){
    //             if(prices[second_iterator] > prices[first_iterator] && (prices[second_iterator] - prices[first_iterator]) > temp){
    //                 max_profit = prices[second_iterator] - prices[first_iterator];
    //                 temp = max_profit;
    //             }
    //         }
    //     }
    //     return max_profit;  
    // }

    int min_price = INT_MAX;
    int max_profit = 0;

    for(int price : prices){
        min_price = min(price,min_price);

        int current_profit = price - min_price;
        max_profit = max(current_profit, max_profit);
    }
    return max_profit;
    }
};