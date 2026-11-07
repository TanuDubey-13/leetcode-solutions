class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = n;
        // First non-negative element
        while(low < high) {
            int mid = low + (high-low)/2;
            if(nums[mid] < 0)
                low = mid + 1;
            else
                high = mid;
        }
        int neg = low;
        low = 0;
        high = n;
        // First positive element
        while(low < high) {
            int mid = low + (high-low)/2;
            if(nums[mid] <= 0)
                low = mid + 1;
            else
                high = mid;
        }
        int pos = n - low;
        return max(neg, pos);

    }
};