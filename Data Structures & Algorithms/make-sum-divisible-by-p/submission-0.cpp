class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int n = nums.size();
        int totalsum = 0;

        for(int i=0;i<n;i++){
            totalsum += nums[i] %p;
        }

        unordered_map<int,int>mp;
        mp[0] = -1;
        int target = totalsum %p;
        if(target == 0) return 0;
        int sum = 0;
        int minlen = n;

        for(int i=0;i<n;i++){
            sum = (sum + nums[i]) %p;

            int prev = (sum - target + p) % p;
            if(mp.find(prev) != mp.end()){
                minlen = min(minlen,i-mp[prev]);
            }
            mp[sum] = i;
        }
        return minlen == n ? -1 : minlen;
    }
};