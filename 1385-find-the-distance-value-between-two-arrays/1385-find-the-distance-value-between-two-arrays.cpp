class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count = 0;
        int n = arr1.size();
        int m = arr2.size();
        int i = 0;
        int j = 0;
        while (i < n) {
            int diff = abs(arr1[i] - arr2[j]);
            if (diff <= d) {
                i++;
                j = 0;
            }
            else {
                j++;
                if (j == m) {
                    count++;
                    i++;
                    j = 0;
                }
            }
        }
        return count;
    }
};