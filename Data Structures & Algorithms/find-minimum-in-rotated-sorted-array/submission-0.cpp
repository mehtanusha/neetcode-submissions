class Solution {
public:
    int findMin(vector<int> &nums) {
        int n = nums.size();
        int left = 0;
        int right = n-1;
        int ans = nums[0];

        while(left <= right){
            int mid = left + (right - left)/2;
            if(nums[left] <= nums[mid] && nums[left] <= nums[right]){
                return nums[left];
            } else if(nums[mid] > nums[right]){
                left = mid + 1;
            } else{
                right = mid;
            }
        }
        return nums[left];
    }
};
