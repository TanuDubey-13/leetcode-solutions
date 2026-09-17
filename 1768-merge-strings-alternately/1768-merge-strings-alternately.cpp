class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0;
        int j=0;
        int n=word1.size();
        int m =word2.size();
        if(n==0) return word2;
        if(m==0) return word1;
        string res;
        while(i<n && j<m){
            res.push_back(word1[i]);
            i++;
            res.push_back(word2[j]);
            j++;
        }
        while(i<n){
            res.push_back(word1[i]);
            i++;
        }
        while(j<m){
            res.push_back(word2[j]);
            j++;
        }
        return res;
    }
};