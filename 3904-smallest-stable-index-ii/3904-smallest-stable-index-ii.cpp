class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> prev(n);
        prev[0]=nums[0];
        for(int i=1;i<n;i++){
            prev[i]=max(prev[i-1],nums[i]);
        }
        int mini=nums[n-1];
        int ans=-1;
        for(int i=n-1;i>=0;i--){
            mini=min(mini,nums[i]);
            if(prev[i]-mini<=k){
                ans=i;
            }
        }
        return ans;
    }
};