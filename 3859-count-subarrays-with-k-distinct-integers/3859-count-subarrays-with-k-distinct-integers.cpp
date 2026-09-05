class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k, int m) {
        auto solve=[&](int limit){
            unordered_map<int,int> freq;
            long long ans=0;
            int l=0;
            int good=0;
            for(int r=0;r<nums.size();r++){
                freq[nums[r]]++;
                if(freq[nums[r]]==m) good++;
                while(freq.size()>=limit && good>=k){
                    int x=nums[l];
                    freq[x]--;
                    if(freq[x]==m-1) good--;
                    if(freq[x]==0) freq.erase(x);
                    l++;
                }
                ans+=l;
            }
            return ans;
        };
        return solve(k)-solve(k+1);
    }
};