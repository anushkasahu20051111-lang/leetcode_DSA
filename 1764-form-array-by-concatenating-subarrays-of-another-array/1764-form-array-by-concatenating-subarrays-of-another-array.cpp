class Solution {
public:
    bool canChoose(vector<vector<int>>& groups, vector<int>& nums) {
        int j = 0;
        for(int i = 0; i < groups.size(); i++) {
            bool found = false;
            while(j + groups[i].size() <= nums.size()) {
                int k = 0;
                while(k < groups[i].size() &&
                      nums[j + k] == groups[i][k]) {
                    k++;
                }
                if(k == groups[i].size()) {
                    found = true;
                    j += groups[i].size();
                    break;
                }
                j++;
            }
            if(!found)
                return false;
        }
        return true;
    }
};