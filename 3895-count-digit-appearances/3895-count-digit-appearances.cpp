class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int dig;
        int count=0;
        for(int i=0;i<nums.size();i++){
            int n=nums[i];
            while(n>0){
                dig=n%10;
                n/=10;
                if(dig==digit) count++;
            }
        }
        return count;
    }
}; 