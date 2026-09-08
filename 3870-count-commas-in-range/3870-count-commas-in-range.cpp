class Solution {
public:
    int countCommas(int n) {
        int i=0;
        int count=0;
    
        for(i=1000;i<=n;i++){
         count++;
        }
        return count;
    }
};