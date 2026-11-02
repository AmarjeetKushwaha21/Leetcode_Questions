class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int s=nums[n/2];
        int ans=0;
        for(int i=0;i<n;i++){
            ans=ans+abs(nums[i]-s);
        }
        return ans;
    }
};