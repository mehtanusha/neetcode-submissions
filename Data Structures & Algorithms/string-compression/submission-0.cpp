class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int write = 0;

        int n = chars.size();

        while(i<n){
            char ch =  chars[i];
            int count = 0;

            while(i<n && chars[i] == ch){
                count ++;
                i++;
            }
            chars[write] = ch;
            write++;

            if(count > 1){
                string num = to_string(count);

                for(char ch : num){
                    chars[write] = ch;
                    write++;
                }
            }
        }
        return write;
    }
};