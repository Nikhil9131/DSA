#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int profit = 0;

        for (int i = 1; i < prices.size(); i++) {

            // If today's price is greater than yesterday's
            if (prices[i] > prices[i - 1]) {

                profit += prices[i] - prices[i - 1];
            }
        }

        return profit;
    }
};

int main() {

    Solution obj;

    int n;
    cin >> n;

    vector<int> prices(n);

    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    cout << obj.maxProfit(prices);

    return 0;
}