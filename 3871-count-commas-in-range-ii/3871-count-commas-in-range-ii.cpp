class Solution {
public:
    long long countCommas(long long n) {
      long long sum=0;
      if(n>=1000){
        sum+=(n-999);
      }
      if(n>=1000000){
        sum+=(n-999999);
      }
      if(n>=1000000000){
        sum+=(n-999999999);
      }
      if(n>=1000000000000){
        sum+=(n-999999999999);
      }
      if(n>=1000000000000000){
        sum+=(n-999999999999999);
      }
      return sum;
    }
};