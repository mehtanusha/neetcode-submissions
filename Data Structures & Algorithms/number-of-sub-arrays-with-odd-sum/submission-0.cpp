class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int MOD = 1e9+ 7;
        int evensum = 1;
        int oddsum = 0;
        int count = 0;
        int n = arr.size();
        int prefixsum = 0;

        for(int i=0;i<n;i++){
            prefixsum += arr[i];
            if(prefixsum %2 == 0){
                count = count + oddsum;
                evensum++;
            }
            else{
                count = count + evensum;
                oddsum++;
            }
            count = count %MOD;
        }
        return count;
    }
};