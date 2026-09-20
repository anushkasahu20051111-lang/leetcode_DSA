class Solution {
public:
    int reverseDegree(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            int value=s[i]-'a'+1;
            int reverseValue=26-value+1;
            ans+=reverseValue*(i+1);
        }
        return ans;
    }
};