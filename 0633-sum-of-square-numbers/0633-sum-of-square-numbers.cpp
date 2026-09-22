class Solution {
public:
    bool judgeSquareSum(int c) {
        long long i=0;
        long long j=sqrt(c);
        while(i<=j){
            long long check=i*i+j*j;
            if(check==c) return true;
            else if(check>c) j--;
            else i++;
        }
        return false;
    }
};