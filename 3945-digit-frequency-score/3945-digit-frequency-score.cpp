class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int, int> mpp;
        vector<int> v;
        while(n!=0){
            int dig=n%10;
            v.push_back(dig);
            n/=10;
        }
        for(int x: v){
            mpp[x]++;
        }
        int sum=0;
        for(auto it : mpp){
          sum+=it.first*it.second;
        }
        return sum;
    }
};