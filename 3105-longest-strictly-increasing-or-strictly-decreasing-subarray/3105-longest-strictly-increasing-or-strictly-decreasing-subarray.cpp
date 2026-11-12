class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int len1=1;
        int len2=1;
        int maxi=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                len1++;
                len2=1;
            }
            else if(nums[i]<nums[i+1]){
                len2++;
                len1=1;
            }
            else{
                len1=1;
                len2=1;
            }
            maxi=max(maxi,max(len1,len2));
        }
        return maxi;
    }
};