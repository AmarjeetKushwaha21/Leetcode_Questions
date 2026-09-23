class Solution {
public:
    int findClosest(int x, int y, int z) {
        int fp=abs(z-x);
        int sp=abs(z-y);
        if(fp<sp) return 1;
        else if(sp<fp) return 2;
        else return 0;
    }
};