class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0) 
               pos.push_back(nums[i]);
            else
            neg.push_back(nums[i]);
        }
        vector<int> res(nums.size());
        int n=neg.size();
        int m=pos.size();
        if(pos.size()==0){
           for(int i=0;i<n;i++){
               neg[i]=neg[i]*neg[i];
           }
           reverse(neg.begin(),neg.end());
               return neg;
           
       }
       if(neg.size()==0){
           for(int i=0;i<m;i++){
               pos[i]=pos[i]*pos[i];
           }
             return pos;
           
       }
        int i=0;
        int j=0;
        int id=0;
        for(int k=0;k<n;k++){
        neg[k]=neg[k]*neg[k];
        }
        reverse(neg.begin(),neg.end());
        for(int k=0;k<m;k++){
            pos[k]=pos[k]*pos[k];
        }
        while(i<n && j < m){
        if(neg[i]<=pos[j]){
          res[id]=neg[i];
          i++;
          id++;
          }
            else{
                res[id]=pos[j];
                j++;
                id++;
            }
        }
        while(i<n){
         res[id]=neg[i];
         id++;
         i++;
        }
        while(j<m){
            res[id]=pos[j];
            id++;
            j++;
        }
        return res;
    }
};