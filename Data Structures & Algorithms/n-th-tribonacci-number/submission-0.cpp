class Solution {
public:
    vector<int>dp;
    int f(int n){
        if(n==0) return 0;
        if(n<=2) return 1;
        if(dp[n] != -1) return dp[n];
        return dp[n] = f(n-1)+f(n-2)+f(n-3);
    }
    int tribonacci(int n) {
        dp = vector<int>(38,-1);

        return f(n);

    }
};