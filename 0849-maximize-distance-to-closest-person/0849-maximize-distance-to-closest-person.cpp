class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int ans=0;
        int n=seats.size();
        int i=0;
        while(seats[i]==0){
            i++;
        }
        ans=i;
        int prev=i;
        for(i=prev+1;i<n;i++){
            if(seats[i]==1){
                ans=max(ans,(i-prev)/2);
                prev=i;
            }
        }
        ans=max(ans,n-1-prev);
        return ans;
    }
};