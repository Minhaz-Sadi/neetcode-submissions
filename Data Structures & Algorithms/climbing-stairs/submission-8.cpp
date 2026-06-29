class Solution {
public:
    vector<int>dp;
    int f(int n){
        if(n < 1) return 0;
        if(n == 1) return 1;
        if(n == 2) return 2;
        if(dp[n] != -1) return dp[n];
        return dp[n] = f(n-1) + f(n-2);
    }

    int climbStairs(int n) {
          dp =   vector<int>(46, -1);

        return f(n);


    }
};