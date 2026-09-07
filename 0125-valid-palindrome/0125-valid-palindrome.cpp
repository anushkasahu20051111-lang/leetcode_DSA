class Solution {
public:
    bool isPalindrome(string s) {
        string ans="";
        for(int c:s){
            if(isalnum(c)){
                ans+=tolower(c);
            }
            }
            string rev=ans;
            reverse(rev.begin(),rev.end());
            return ans==rev;
    }
};