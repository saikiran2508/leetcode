class Solution {
public:
    int compress(vector<char>& c) {
        if(c.size() == 1){
            return 1;
        }
        
        int i = 0;
        for(int j = 1, count = 1; j <= c.size(); j++, count++){
            if(j == c.size() || c[j] != c[j-1]){
                c[i++] = c[j-1];
                if(count >= 2){
                    for(char d: to_string(count)){
                        c[i++] = d;
                    }
                }
                count = 0;
            }
        }
        return i;
    }
};
