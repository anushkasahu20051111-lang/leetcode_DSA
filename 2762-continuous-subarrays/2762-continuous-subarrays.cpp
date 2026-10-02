class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        multiset<int> s;
        long long ans=0;
        int left=0;
        for(int right=0;right<nums.size();right++){
            s.insert(nums[right]);
             while(*s.rbegin()-*s.begin()>2){
            s.erase(s.find(nums[left]));
            left++;
        }
            ans+=right-left+1;
        }
        return ans;
    }
};