class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int odd=0;
        int even=0;
        for(int x:nums1){
            if(x%2==0)
                even++;
            else
            odd++;
            
        }
        //for making everything even
        if(odd==0||odd>=2){
            return true;
        }
        // for making everything odd
        if(odd>=1){
            return true;
        }
        return false;
    }
};