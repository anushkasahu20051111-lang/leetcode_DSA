class Solution {
public:
    bool detectCapitalUse(string word) {
        int capital=0;
        for(char ch : word) {
            if(isupper(ch)) {
                capital++;
            }
        }
        if(capital == word.size() || capital == 0 || capital == 1 && isupper(word[0])) {
            return true;
        }
        return false;
    }
};