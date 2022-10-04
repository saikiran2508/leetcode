class Solution {
public:
    int minCost(string s, vector<int>& t) {
        int ans = t[0], mx = t[0];
        for(int i = 1; i < s.length(); i++){
            if(s[i] != s[i-1]){
                ans -= mx;
                mx = 0;
            }
            ans += t[i];
            mx = max(mx, t[i]);
        }
        return ans-mx;
    }
};
