class Solution {
public:

    vector<int> dp;
    int f(int i, vector<int> &cost){
        int n = cost.size();
        if(i >= n) return 0;
        if(dp[i] != -1) return dp[i];
        int a = cost[i] + f(i+1, cost);
        int b = cost[i] + f(i+2, cost);
        return dp[i] = min(a, b);

    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        dp = vector<int>(n, -1);
        return min(f(0, cost), f(1, cost));
        
    }
};