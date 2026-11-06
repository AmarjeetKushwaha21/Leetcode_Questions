class Solution {
public:
    int subtractProductAndSum(int n) {
        int prodct=1;
        int sum=0;
        while(n>0){
            int d=n%10;
            prodct*=d;
            sum+=d;
            n/=10;
        }
        return prodct-sum;
        
    }
};