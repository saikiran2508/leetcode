class Solution {
public:
    bool increasingTriplet(vector<int>& a) {
        int n = a.size();
        vector<int> left(n,0),right(n,0);
        left[0]=a[0];
        for(int i=1;i<n;i++){
            left[i]=min(a[i-1],left[i-1]);
        }
        
        right[0]=a[n-1];
        for(int i=n-2;i>=0;i--){
            right[i]=max(a[i+1],right[i+1]);
        }
        
        for(int i=1;i<n-1;i++){
            if(left[i]<a[i] && right[i]>a[i]) return true;
        }
        return false;
    }
};