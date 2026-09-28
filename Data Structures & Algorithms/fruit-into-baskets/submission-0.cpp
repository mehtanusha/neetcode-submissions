class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int ans = 0;
        int f1 = -1;
        int f2 = -1;

        int count1 = 0;
        int count2 = 0;

        int i=0;
        int j=0;

        while(j<fruits.size()){
            if(fruits[j] == f1){
                count1++;
            }
            else if(fruits[j] == f2){
                count2++;
            }else{
                while(count1 >0 && count2>0){
                    if(fruits[i] == f1){
                        count1--;
                    }else{
                        count2--;
                    }
                    i++;
                }
                if(count1 == 0){
                    f1 = fruits[j];
                    count1 = 1;
                }else{
                    f2 = fruits[j];
                    count2 = 1;
                }
            }
            ans = max(ans,j-i+1);
            j++;
        } 
        return ans;
    }
};