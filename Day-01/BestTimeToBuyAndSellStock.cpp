#include<bits/stdc++.h>
using namespace std;

// Brute approach

int maxProfit(vector<int>& prices) {

    int maxProfit = 0;

    for(int i = 0; i < prices.size(); i++){
        for(int j = i + 1; j < prices.size(); j++){

            int profit = prices[j] - prices[i];

            if(profit > maxProfit){
                maxProfit = profit;
            }
        }
    }

    return maxProfit;
}


// Optimal approach

int maxProfit(vector<int>& prices) {

    int minPrice = INT_MAX;
    int profit = 0;

    for(int price : prices){

        if(price < minPrice){
            minPrice = price;
        }

        else if(price - minPrice > profit){
            profit = price - minPrice;
        }
    }

    return profit;
}



int main() {

    vector<int> prices = {7,1,5,3,6,4};

    cout << "Maximum Profit: " << maxProfit(prices);

    return 0;
}