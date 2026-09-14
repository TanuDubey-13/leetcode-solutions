class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char, int> mpp;
        for(int x : s){
            mpp[x]++;
        }
        int maxFreq1=0;
        int maxFreq2=0;
        int sum1=0;
        int sum2=0;
        for(auto it : mpp){
            int check =it.first;
            if(check=='a'||check=='e'||check=='i'||check=='o'||check=='u'){
               if(it.second>maxFreq1){
                maxFreq1=it.second;
               }
            }
            else{
                if(it.second>maxFreq2){
                    maxFreq2=it.second;
                }
            }
        }
        sum1+=maxFreq1;
        sum2+=maxFreq2;
        int sum=sum1+sum2;
        return sum;
    }
};