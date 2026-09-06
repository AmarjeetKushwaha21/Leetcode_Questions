class Solution {
public:
    string toHex(int num) {
        if(num==0) return "0";
        unsigned int n=num;
        stack<char> st;
        string str="0123456789abcdef";
        while(n>0){
            st.push(str[n%16]);
            n=n/16;
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};