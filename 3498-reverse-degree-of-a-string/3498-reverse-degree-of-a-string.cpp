class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        for(int i=0;i<s.size();i++){
            char curr=s[i];
            int reverse = 26-(curr-'a');
            int index=i+1;
            sum+=reverse*index;
        }
        return sum;
    }
};