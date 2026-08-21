class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n= nums.size();

        int sum = 0;
        int ans = 0;
        int zerocount = 0;
        int i=0;

        for(int j=0;j<n;j++){
            sum += nums[j];

            while(sum > goal){
                sum -= nums[i];
                i++;
                zerocount = 0;
            }
            while( i<j && nums[i] == 0){
                zerocount++;
                i++;
            }
            if(sum == goal && i<=j){
                ans += zerocount + 1;
            }
        }
        return ans;
    }
};