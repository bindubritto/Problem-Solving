#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


class Solution {
public:

    // Suboptimal - O(n^2) using 2 for loop, but got TLE;
    // Optimal - O(n) Time, O(1) Space
    int maxProfit(vector<int>prices) {
        int min_price = INT_MAX;
        int max_profit = INT_MIN;
        
        for(int i = 0; i< prices.size(); i++){
            min_price = min(min_price, prices[i]);
            max_profit = max(max_profit, prices[i] - min_price);
        }
        return max_profit;
    }
};

int main()
{
    freopen("out.txt", "w", stdout);

    Solution sln;

    vector<int>v{7,1,5,3,6,4};

    int res = sln.maxProfit(v);

    cout<<res<<"\n";

    return 0;
}