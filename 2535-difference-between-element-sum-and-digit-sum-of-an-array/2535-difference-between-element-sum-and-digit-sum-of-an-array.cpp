class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int esum=0;
        int dsum=0;
        for(int i=0;i<nums.size();i++){
            esum+=nums[i];
            int val=nums[i];
            while(val>0){
                int d=val%10;
                dsum+=d;
                val/=10;
            }
        }
        return abs(esum-dsum);
    }
};