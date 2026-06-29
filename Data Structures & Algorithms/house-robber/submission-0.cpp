class Solution {
public:
    vector<int>dp;
    int f(int i, vector<int>& nums){
        int n = nums.size();
        if(i >= n) return 0;
        if(dp[i] != -1) return dp[i];
        int a = nums[i] + f(i+2, nums);
        int b = f(i+1, nums);
        return dp[i] = max(a , b);
    }
    int rob(vector<int>& nums) {
            dp = vector<int>(550, -1);
        return f(0, nums);
        
    }
};