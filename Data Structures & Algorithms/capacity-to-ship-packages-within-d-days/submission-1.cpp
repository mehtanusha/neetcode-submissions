
class Solution {
public:
    int solve(vector<int>& weights, int mid) {
        int day = 1;
        int sum = 0;

        for(int i = 0; i < weights.size(); i++) {
            sum += weights[i];
            if(sum > mid){
                day++;
                sum = weights[i];
            }
        }
        return day;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();

        int low = *max_element(weights.begin(),weights.end());
        int high = weights[0];

        for(int i = 1; i < weights.size(); i++) {
            high += weights[i];
        }

        int ans = INT_MAX;

        while(low <= high) {
            int mid = low + (high - low) / 2;

            if(solve(weights, mid) <= days) {
                ans = min(ans, mid);
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return ans;
    }
};
