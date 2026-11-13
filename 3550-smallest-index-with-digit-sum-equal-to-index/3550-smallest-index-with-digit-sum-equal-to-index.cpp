class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int val=nums[i];
            int sum=0;
            while(val>0){
                int d=val%10;
                sum+=d;
                val/=10;
            }
            if(sum==i) return i;
        }
        return -1;
    }
};