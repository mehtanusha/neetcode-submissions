class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int l = 0;
        long long windowsum = 0;
        int ans = 0;

        for (int r = 0; r < n; r++) {
            windowsum += nums[r];

            long long cost =
                1LL * nums[r] * (r - l + 1) - windowsum;

            while (cost > k) {
                windowsum -= nums[l];
                l++;

                cost =
                    1LL * nums[r] * (r - l + 1) - windowsum;
            }

            ans = max(ans, r - l + 1);
        }

        return ans;
    }
};