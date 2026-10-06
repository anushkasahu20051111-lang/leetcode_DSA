class Solution {
public:
    int minAddToMakeValid(string s) {
        int count1=0;
        int ans=0;
        for(char x:s){
            if(x=='('){
                count1++;
            }
            else{
                if(count1>0){
                    count1--;
                }
                else{
                    ans++;
                }
            }
        }
        return ans+count1;
    }
};