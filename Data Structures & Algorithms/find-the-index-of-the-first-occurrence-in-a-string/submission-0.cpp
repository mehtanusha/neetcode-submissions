class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();

        if(n < m){
            return -1;
        }
        
        for(int i=0;i<haystack.size();i++){
            int idx = i;
            int j = 0;

            while(j<m){
                if(haystack[idx] == needle[j]){
                    idx++;
                    j++;
                }
                else{
                    break;
                }
            }
            if(j==m){
                return i;
            }
        }
        return -1;
    }
};