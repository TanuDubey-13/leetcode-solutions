class Solution {
public:
    int possibleStringCount(string word) {
        int n=word.size();
        int count =0;
        for(int i=0;i<n;i++){
            if(word[i]==word[i+1]) count+=1;
        }
        return count+1;
    }
};