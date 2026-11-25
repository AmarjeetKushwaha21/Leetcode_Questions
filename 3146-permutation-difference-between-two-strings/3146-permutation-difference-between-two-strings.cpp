class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int sum=0;
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            for(int j=0;j<t.size();j++){
                if(ch==t[j]){
                sum+=abs(i-j);
                }
            }
        }
        return sum;
    }
};