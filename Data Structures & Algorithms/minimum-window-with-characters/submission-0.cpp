class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>mp;
        
        if(s.size() < t.size()){
            return "";
        }

        for(char &ch : t){
            mp[ch]++;
        }

        int i=0;
        int j =0;
        int countrequired = t.size();
        int minlen = INT_MAX;
        int start_i = 0;

        while(j < s.size()){
            if(mp[s[j]] > 0){
                countrequired--;
            }
            mp[s[j]]--;
            while(countrequired == 0){
                if(j-i+1 < minlen){
                    minlen = j-i+1;
                    start_i = i;
                }
                mp[s[i]]++;
                 if(mp[s[i]] > 0){
                    countrequired++;
                }
                i++;
            }
            j++;
        }
        return minlen == INT_MAX ? "" : s.substr(start_i,minlen);
    }
};
