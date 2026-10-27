class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n =image.size();
        int m =image[0].size();
        int i =0;
        while(i<n){
            int j=0;
            int k=m-1;
            while(j<k){
                swap(image[i][j],image[i][k]);
                j++;
                k--;
            }
            i++;
        }
        int k=0;
        while(k<n){
            int j=0;
            while(j<m){
                if(image[k][j]==1){
                    image[k][j]=0;
                    j++;
                }
                else{
                    image[k][j]=1;
                    j++;
                }
            }
            k++;
        }
        return image;
    }
};