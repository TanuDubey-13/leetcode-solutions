class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int, int> mpp;
        int n=candyType.size();
        for(int x : candyType){
            mpp[x];
       }
       int k=n/2;
       int m=mpp.size();
        if(m>=k) return k;
        else 
        return m;
    }
};