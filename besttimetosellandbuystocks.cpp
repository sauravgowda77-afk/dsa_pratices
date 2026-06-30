#include<bits/stdc++.h>
using namespace std;

    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int mini = prices[0];
        for(int i =1;i<prices.size();i++){
            int cost = prices[i] - mini;
            profit = max(profit,cost);
            mini = min(mini,prices[i]);
        }
        return profit;
    }

int main(){
    int n;
    cin>>n;
    vector<int>prices(n);
    for(int i=0;i<n;i++){
        cin>>prices[i];
    }
    cout << maxProfit(prices) << endl;
}