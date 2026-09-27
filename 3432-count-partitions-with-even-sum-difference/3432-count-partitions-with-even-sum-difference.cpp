class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n=nums.size();
        vector<int> prefx(n+1,0);
        for(int i=0;i<n;i++){
            prefx[i+1]=prefx[i]+nums[i];
        }
        int total=prefx[n];
        int count=0;
        for(int i=1;i<n;i++){
            int l=prefx[i];
            int r=total-prefx[i];
            if((l-r)%2==0) count++;
        }
        return count;
    }
};