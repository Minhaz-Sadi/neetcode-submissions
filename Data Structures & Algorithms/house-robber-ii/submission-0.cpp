class Solution {
public:
    vector<int>dp1, dp2;
    int f(int i, vector<int>& nums, int ch){
        if(ch==0){
            int n = nums.size();
            if(i >= n-1) return 0;
            if(dp1[i] != -1) return dp1[i];
            int a = nums[i] + f(i+2, nums, 0);
            int b = f(i+1, nums, 0);
            return dp1[i] = max(a , b);
        }
        int n = nums.size();
        if(i >= n) return 0;
        if(dp2[i] != -1) return dp2[i];
        int a = nums[i] + f(i+2, nums, 1);
        int b = f(i+1, nums, 1);
        return dp2[i] = max(a , b);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();

        if(n==1) return nums[0];
        dp1 = vector<int>(n, -1);
        dp2 = vector<int>(n, -1);

    return max(f(0, nums, 0),f(1, nums, 1));

        
    }
};