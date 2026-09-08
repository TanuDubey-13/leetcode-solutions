class Solution {
public:
    int countCommas(int n) {
        int original=n;
        int i=0;
        int count=0;
        while(n!=0){
            int dig=n%10;
            n/=10;
            i++;
        }
        if(i==3) return 0;
        for(i=1000;i<=original;i++){
         count++;
        }
        return count;
    }
};