class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> v;
        for(int i=left;i<=right;i++){
            int num=i;
            bool flag=true;
            while(num!=0){
                int dig=num%10;
                if(dig==0||i%dig!=0){
                    flag=false;
                    break;
                }
                num/=10;
            }
            if(flag) v.push_back(i);
        }
        return v;
    }
};