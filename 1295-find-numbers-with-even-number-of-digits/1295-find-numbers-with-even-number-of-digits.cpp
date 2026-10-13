class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int x : nums){
            int dig=log10(x)+1;
            if(dig%2==0) count++;
        }
        return count;
    }
};