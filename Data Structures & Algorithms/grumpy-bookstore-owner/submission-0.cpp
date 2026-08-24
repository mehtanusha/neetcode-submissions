class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        int ans = 0;

        for(int i=0;i<n;i++){
            if(grumpy[i] == 0){
                ans += customers[i];
            }
        }

        int i=0;
        int j =0;
        int k =0;
        int temp = 0;
        int maxi = INT_MIN;

        while(j<n){
            if(grumpy[j] == 1){
                temp += customers[j];
            }
              k++;
            while(k > minutes){
                if(grumpy[i] == 1){
                    temp -= customers[i];
                }
                k--;
                i++;
            }
            maxi = max(maxi,temp);
            j++;
        }
        ans += maxi;
        return ans;
    }
};