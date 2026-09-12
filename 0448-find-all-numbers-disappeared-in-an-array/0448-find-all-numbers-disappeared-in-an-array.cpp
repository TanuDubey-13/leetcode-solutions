class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int, int> mpp;
        vector<int> v;
        int n=nums.size();
        for(int i : nums){
            mpp[i]++;
        }
        
        for(int i=1;i<=n;i++){
            if(mpp.find(i)==mpp.end()){
                v.push_back(i);
            }
        }
        return v;
    }
};