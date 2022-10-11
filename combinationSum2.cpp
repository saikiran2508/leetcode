
class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int> v;
        sort(candidates.begin(),candidates.end());
        func(candidates,0,target,v,ans);
        return ans;
    }
    void func(vector<int>& a,int ind,int target,vector<int> &v,vector<vector<int>>&ans){
        if(target==0){
            ans.push_back(v);
            return;
        }
        for(int i=ind;i<a.size();i++){
            if(i>ind and a[i]==a[i-1]) continue;
            if(a[i]>target)break;
            v.push_back(a[i]);
            func(a,i+1,target-a[i],v,ans);
            v.pop_back();
        }
    }
};
