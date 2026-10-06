class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int cc=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(s[i]);
            }
            else{
                if(!st.empty() && st.top()=='(') st.pop();
                else cc++;
            }
        }
        int oc=st.size();
        return oc+cc;
    }
};