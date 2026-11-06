class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        int low=1;
        int high=n;
        int ans=0;
        while(low<=high){
            int mid=(low+high)/2;
            if(citations[n-mid]>=mid){
                ans=mid;
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return ans;
    }
};