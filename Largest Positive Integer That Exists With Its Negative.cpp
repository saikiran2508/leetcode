class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        map<int,int> mp;
        for(int i: nums){
            mp[i]++;
        }
        for(int i = nums.size()-1; i >= 0; i--){
            if(mp.find(-nums[i]) != mp.end()) return nums[i];
        }
        return -1;
    }
};
