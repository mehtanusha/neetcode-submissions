class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int start = 0;
        int ansStart = 0;
        int ansEnd = 0;
        int sum = 0;
        int maxi = INT_MIN;

        for(int i=0;i<n;i++){
            if(sum == 0){
                start = i;
            }
            sum = sum + nums[i];

            if(sum >maxi){
                maxi = sum;
                ansStart = start;
                ansEnd = i;
            }
            if(sum < 0){
                sum = 0;
            }
        }
        return maxi;
    }
};
