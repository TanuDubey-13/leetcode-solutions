class Solution {
public:
    int commonFactors(int a, int b) {
       int cnt=0;
       int g=gcd(a,b);
       for(int i=1;i*i<=g;i++){
        if(g%i==0 ){
            cnt++;
            if(g/i!=i) cnt++;
        }

       } 
       return cnt;
    }
};