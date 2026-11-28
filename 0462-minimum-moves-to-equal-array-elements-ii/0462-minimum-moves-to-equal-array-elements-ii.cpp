class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int low=0;
        int high=n-1;
        int mid=low+(high-low)/2;
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=(abs(nums[i]-nums[mid]));
        }
        return ans;
    }
};