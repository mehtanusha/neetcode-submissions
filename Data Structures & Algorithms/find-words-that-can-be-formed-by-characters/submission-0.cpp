class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int>freq(26,0);
        int count =0;

        for(char ch :  chars){
            freq[ch-'a']++;
        }
        for(string word : words){
            vector<int>cnt(26,0);
            for(char ch : word){
                cnt[ch-'a']++;
            }
            bool valid = true;
            for(int i=0;i<26;i++){
                if(freq[i] < cnt[i]){
                    valid = false;
                    break;
                }
            }
            if(valid){
                count +=  word.size();
            }
        }
        return count;
    }
};