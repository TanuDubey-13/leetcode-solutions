class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string , int> mpp;
        for(string x : arr){
            mpp[x]++;
        }
        for(string x : arr){
            if(mpp[x]==1)
            k--;

            if(k==0) return x;
        }
        return "";
    }
};