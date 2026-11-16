 
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int> s;
        for(int x : a) {
            bool b = true;
            while(!s.empty() && s.top() > 0 && x < 0) {
                if(s.top() < -x) {
                    s.pop();
                }
                else if(s.top() == -x) {
                    s.pop();
                    b = false;
                    break;
                }
                else {
                    b = false;
                    break;
                }
            }
            if(b) s.push(x);
        }
        vector<int> v;
        while(!s.empty()) {
            v.push_back(s.top());
            s.pop();
        }
        reverse(v.begin(), v.end());
        return v;
    }
};