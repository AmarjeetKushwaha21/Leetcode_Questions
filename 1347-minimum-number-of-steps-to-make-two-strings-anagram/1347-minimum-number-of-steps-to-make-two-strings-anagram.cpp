class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int> m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
            m[t[i]]--;
        }
        int st=0;
        for(auto i : m){
            if(i.second>0){
            st+=abs(i.second);
            }
        }
        return st;
    }
};