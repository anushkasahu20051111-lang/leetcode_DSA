class Solution {
public:
    bool equalFrequency(string word) {
        int freq[26] = {0};
        for(char ch : word) {
            freq[ch - 'a']++;
        }
        for(int i = 0; i < 26; i++) {
            if(freq[i] == 0) continue;
            freq[i]--;
            int minFreq = INT_MAX;
            int maxFreq = 0;
            for(int j = 0; j < 26; j++) {
                if(freq[j] > 0) {
                    minFreq = min(minFreq, freq[j]);
                    maxFreq = max(maxFreq, freq[j]);
                }
            }
            freq[i]++;
            if(minFreq == maxFreq)
                return true;
        }
        return false;
    }
};