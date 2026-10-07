class Solution {
public:
    int compress(vector<char>& chars) {
        int index = 0;
        for(int i = 0; i < chars.size(); ) {
            char ch = chars[i];
            int count = 0;
            while(i < chars.size() && chars[i] == ch) {
                count++;
                i++;
            }
            chars[index++] = ch;
            if(count > 1) {
                string num = to_string(count);
                for(char digit : num) {
                    chars[index++] = digit;
                }
            }
        }
        return index;
    }
};