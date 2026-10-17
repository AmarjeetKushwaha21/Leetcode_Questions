class Solution {
public:
    int commonFactors(int a, int b) {
        vector<int> s;
        for(int i=1;i<=max(a,b);i++){
            if(a%i==0 && b%i==0){
                s.push_back(i);
            }
        }
        return s.size();
    }
};