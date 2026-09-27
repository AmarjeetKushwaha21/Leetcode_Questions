class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int> prefx(n+1,0);
        for(int i=0;i<n;i++){
            prefx[i+1]=prefx[i]+gain[i];
        }
        int mx=INT_MIN;
        for(int i=0;i<prefx.size();i++){
            mx=max(mx,prefx[i]);
        }
        return mx;
    }
};