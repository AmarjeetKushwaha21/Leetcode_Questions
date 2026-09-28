class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(s[i]);
                count=max((int)st.size(),count);
            }
            else if(s[i]==')') st.pop();
        }
        return count;
    }
};