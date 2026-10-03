class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int left=0;
        int right=piles.size()-1;
        int chooseA=0,chooseB=0;
        int sum1=0,sum2=0;
        while(left<right){
          if(piles[left]>piles[right]) {
            chooseA =piles[left];
            chooseB =piles[right];
            left++;
          }
          else {
            chooseA=piles[right];
            chooseB =piles[left];
            right--;
          }
          sum1+=chooseA;
          sum2+=chooseB;
        }
        return (sum1>sum2);
    }
};