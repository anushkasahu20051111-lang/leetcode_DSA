class Solution {
public:
    string reverseVowels(string s) {
        int i = 0;
        int j = s.size() - 1;
        while(i < j) {
            while(i < j && !(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||
                             s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||
                             s[i]=='u'||s[i]=='U')) {
                i++;
            }
            while(i < j && !(s[j]=='a'||s[j]=='A'||s[j]=='e'||s[j]=='E'||
                             s[j]=='i'||s[j]=='I'||s[j]=='o'||s[j]=='O'||
                             s[j]=='u'||s[j]=='U')) {
                j--;
            }
            if(i < j) {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};