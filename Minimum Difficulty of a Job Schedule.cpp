class Solution {
public:
    int solve(vector<int> &jd, int d, vector<vector<int>> &dp, int idx, int n){
        if(d == 1){
            int mx = 0;
            while(idx < n) mx = max(mx, jd[idx++]);
            return mx;
        }
        if(dp[d][idx] != -1) return dp[d][idx];
        
        int mx = 0;
        int res = INT_MAX;
        
        for(int i = idx; i < n-d+1; i++){
            mx = max(mx, jd[i]);
            res = min(res, mx + solve(jd, d-1, dp, i+1, n));
        }
        return dp[d][idx] = res;
    }
    int minDifficulty(vector<int>& jd, int d) {
        int n = jd.size();
        if(n < d) return -1;
        if(n == d){
            int sum = 0;
            for(auto i: jd) sum += i;
            return sum;
        }
        vector<vector<int>> dp(d+1, vector<int> (n, -1));
        return solve(jd, d, dp, 0, n);
    }
};
