class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int i=0;
        int j=0;

        deque<int>maxD;
        deque<int>minD;

        int ans = 0;

        while(j<nums.size()){
            while(!maxD.empty() && nums[maxD.back()] < nums[j]){
                maxD.pop_back();
            }
            
            maxD.push_back(j);
            
            while(!minD.empty() && nums[minD.back()] > nums[j]){
                minD.pop_back();
            }
            
            minD.push_back(j);

            while(nums[maxD.front()] - nums[minD.front()] > limit){
                if(maxD.front() == i){
                    maxD.pop_front();
                }

                if(minD.front() == i){
                    minD.pop_front();
                }
                i++;
            }
            ans = max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};