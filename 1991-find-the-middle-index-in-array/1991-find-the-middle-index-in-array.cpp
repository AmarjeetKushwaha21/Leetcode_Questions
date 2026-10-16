class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int> prefx(n);
        prefx[0]=nums[0];
        for(int i=1;i<n;i++){
            prefx[i]=prefx[i-1]+nums[i];
        }
        int totalSum = prefx[n - 1];
        for (int i = 0; i < n; i++) {
            int leftSum=0;
            if(i==0) leftSum = 0;
            else{
            leftSum = prefx[i - 1];
            }
            int rightSum = totalSum - prefx[i];

            if (leftSum == rightSum)
                return i;
        }
        return -1;
    }
};