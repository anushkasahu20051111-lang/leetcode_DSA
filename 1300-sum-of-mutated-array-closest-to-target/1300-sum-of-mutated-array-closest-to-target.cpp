class Solution {
public:
    int findBestValue(vector<int>& arr, int target) {
        int low=0;
        int high=*max_element(arr.begin(),arr.end());
        int ans=0;
        int diff=INT_MAX;
        while(low<=high){
            int mid=low+(high-low)/2;
            int sum=0;
            for(int i=0;i<arr.size();i++){
                sum+=min(arr[i],mid);
            }
            if(abs(sum-target)<diff){
                diff=abs(sum-target);
                ans=mid;
            }
            else if(abs(sum-target)==diff){
                ans=min(ans,mid);
            }
            if(sum<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
};