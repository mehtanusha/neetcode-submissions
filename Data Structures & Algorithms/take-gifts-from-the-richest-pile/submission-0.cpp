class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int>pq;

        for(int &gift : gifts){
            pq.push(gift);
        }

        while(k!=0){
            int num = pq.top();
            pq.pop();

            int rem = sqrt(num);
            pq.push(rem);
            k--;
        }

        int ans = 0;
        while(!pq.empty()){
            ans += pq.top();
            pq.pop();
        }
        return ans;
    }
};