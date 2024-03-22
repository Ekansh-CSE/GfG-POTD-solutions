class Solution {
  public:
    vector<int> Series(int n) {
        // Code here
        int MOD=1e9+7;
        vector<int> dp(n+1,0);
        dp[0]=0;
        dp[1]=1;
        
        for(int i=2;i<=n;i++){
            dp[i]=(dp[i-1]+ dp[i-2]) % MOD;
        }
        return dp;
    }
};
