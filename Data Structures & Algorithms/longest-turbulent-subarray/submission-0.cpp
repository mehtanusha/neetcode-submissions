class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int i=0;
        int j =1;
        int ans = 1;
        char prev = ' ';

        while(j<arr.size()){
            if(arr[j-1] > arr[j]){
                if(prev == '>'){
                    i = j-1;
                }
                prev = '>';
            }
            else if(arr[j-1] < arr[j]){
                if(prev == '<'){
                    i = j-1;
                }
                prev = '<';
            }
            else{
                if(arr[j-1] == arr[j]){
                    i = j;
                    prev = ' ';
                }
            }
            ans = max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};