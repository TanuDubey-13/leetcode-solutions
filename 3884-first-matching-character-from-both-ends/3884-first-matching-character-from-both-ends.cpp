class Solution {
public:
    int firstMatchingIndex(string s) {
        if(s.size()==1) return 0;
        int i=0;
        int j =s.size()-1;
        while(i<=j){
            if(s[i]==s[j]) return i;
            i++;
            j--;
        }
        return -1;
    }
};