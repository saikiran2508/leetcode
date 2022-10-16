class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        set<int> st;
        for(auto i: nums) st.insert(i);
        
        for(int n: nums){
            int rn = 0;
            int rem = 0;
            while(n){
                rem = n%10;
                rn = rn*10 + rem;
                n/=10;
            }
            st.insert(rn);
        }
        return st.size();
    }
};
