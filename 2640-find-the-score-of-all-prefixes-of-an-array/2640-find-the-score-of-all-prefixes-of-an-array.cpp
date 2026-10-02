class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        int n=nums.size();
        vector<long long> prefx(n);
        int mx=nums[0];
        prefx[0]=2*nums[0];
        for(int i=1;i<n;i++){
            mx=max(mx,nums[i]);
            prefx[i]=prefx[i-1]+nums[i]+mx;
        }
        return prefx;
    }
};