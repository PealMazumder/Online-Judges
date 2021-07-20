//Bottom up approach
class Solution {
public:
    int climbStairs(int n) {
        if(n <= 2) return n;
        
        int a = 1; // two step before
        int b = 2; // one step before
        int ans = 0;
        for(int i = 3; i <= n; i++)
            ans = a + b, a = b, b = ans;
        return ans;
    }
};

//Recursion with memorization
class Solution {
public:
    vector<int> dp;
    int distinctWays(int n)
    {
        if(n == 0) return 1;
        if(n < 0) return 0;
        if(dp[n] != -1) return dp[n];
        
        return dp[n] = distinctWays(n - 1) + distinctWays(n-2);
    }
    int climbStairs(int n) {
        for(int i = 0; i<50; i++) dp.push_back(-1);
        int ans = distinctWays(n);
        return ans;
    }
};