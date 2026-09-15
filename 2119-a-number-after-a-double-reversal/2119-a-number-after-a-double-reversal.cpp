class Solution {
public:
    bool isSameAfterReversals(int num) {
        string n=to_string(num);
        reverse(n.begin(),n.end());
        int rev1=stoi(n);
        n=to_string(rev1);
        reverse(n.begin(),n.end());
        int rev2=stoi(n);

        if(num==rev2) return true;
        else return false;
    }
};