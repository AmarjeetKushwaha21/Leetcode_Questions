class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n=operations.size();
        stack<int> st;
        for(int i=0;i<n;i++){
            if(operations[i]=="+"){
                int val1=st.top();
                st.pop();
                int val2=st.top();
                int val=val1+val2;
                st.push(val1);
                st.push(val);
            }
           else if(operations[i]=="D"){
                int val=st.top()*2;
                st.push(val);
            }
            else if(operations[i]=="C"){
                st.pop();
            }
            else{
                st.push(stoi(operations[i]));
            }
        }
        int ans=0;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};