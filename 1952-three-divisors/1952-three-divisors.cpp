class Solution {
public:
    bool isThree(int n) {
        vector<int> v;
        for(int i=1;i<=n;i++){
            if(n%i==0) v.push_back(i);
        }
        if(v.size()==3) return true;
        return false;
    }
};