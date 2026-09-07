long long hours(vector<int>& piles,int mid){
            long long hour = 0;
            for(int pile:piles){
                hour +=(pile+mid-1)/mid;
            }
            return hour;
        }

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long n = piles.size();
        long long start = 1;
        long long e = *max_element(begin(piles),end(piles));
        long long ans = e;
        while(start<=e){
            int mid = start + (e- start)/2;
            if(hours(piles,mid)<=h){
                ans = mid;
                e = mid-1;
            }
            else{
                start = mid+1;
            }
            
        } return ans;
    }
};