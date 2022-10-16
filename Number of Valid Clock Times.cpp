class Solution {
public:
    int countTime(string t) {
        int ans = 1;
        if(t[0] == '?' && t[1] == '?') ans *= 24;
        else if(t[0] == '?'){
            if(t[1]-'0' < 4) ans*=3;
            else ans *= 2;
        }
        else if(t[1] == '?'){
            if(t[0] == '2') ans *= 4;
            else ans *= 10;
        }
        
        if(t[3] == '?' && t[4] == '?') ans *= 60;
        else if(t[3] == '?'){
            ans *= 6;
        }
        else if(t[4] == '?'){
            ans*=10;
        }
        return ans;
    }
};
