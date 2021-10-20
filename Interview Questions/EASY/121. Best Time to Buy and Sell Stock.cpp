class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn = prices[0], ans = 0;
        for(int i = 1; i < (int)prices.size(); i++)
        {
            mn = min(mn, prices[i]);
            ans = max(ans, prices[i] - mn);
        }
        return ans;
    }
};