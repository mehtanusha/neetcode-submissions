class Solution {
public:
    int minSwaps(string s) {
        int balance = 0;
        int swaps = 0;

        for(int i=0;i<s.size();i++){
            if(s[i] == '['){
                balance ++;
            }
            else{
                balance --;
           }
            if(balance < 0){
                swaps++;
                balance += 2;
           }
        }
        return swaps;
    }
};