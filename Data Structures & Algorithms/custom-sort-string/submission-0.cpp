class Solution {
public:
    string customSortString(string order, string s) {
        vector<int>freq(26,0);

        for(int i=0;i<s.size();i++){
            freq[s[i] - 'a'] ++;
        }

        string ans = "";

        for(char ch : order){
            while(freq[ch - 'a'] > 0){
                ans += ch;
                freq[ch-'a'] --;
            }
        }
        for(char ch : s){
            while(freq[ch - 'a'] > 0){
                ans += ch;
                freq[ch-'a']--;
            }
        }
        return ans;
    }
};