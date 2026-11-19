class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int mn=0;
        mn=min(nums[n-1]-nums[2],nums[n-2]-nums[1]);
        int ans=min(mn,nums[n-3]-nums[0]);
        return ans;
    }
};