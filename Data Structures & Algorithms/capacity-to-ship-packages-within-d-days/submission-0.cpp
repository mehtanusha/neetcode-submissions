
class Solution {
public:
    int solve(vector<int>& weights, int mid) {
        int day = 1;
        int sum = 0;

        for(int i = 0; i < weights.size(); i++) {
             // Agar single package hi capacity se bada hai
            if(weights[i] > mid) {
                return INT_MAX;
            }

            if(sum + weights[i] <= mid) {
                sum += weights[i];
            }
            else {
                day++;
                sum = weights[i];
            }
        }

        return day;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();

        int low = 1;
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
