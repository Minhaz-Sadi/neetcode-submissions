class Solution {
public:
    vector<vector<int>> dp;
    int f(int l, int r,string &s){
        if(l>=r) return 1;
        if(dp[l][r] != -1) return dp[l][r];

        if(s[l] == s[r]){
            return dp[l][r] = f(l+1, r-1, s);
        }

        return dp[l][r] = 0;

    }
    string longestPalindrome(string s) {
        int n = s.size();
        dp = vector<vector<int>>(n, vector<int>(n, -1));
        int pos1 = 0, pos2 = 0;
        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                if(f(i, j, s) != 0 && (j - i + 1) > (pos2 - pos1 + 1)){
                    pos1 = i;
                    pos2 = j;
                }
            }
        }

        string ret = "";
        for(int i = pos1; i <= pos2; i++){
            ret += s[i];
        }

        return ret;
        
    }
};