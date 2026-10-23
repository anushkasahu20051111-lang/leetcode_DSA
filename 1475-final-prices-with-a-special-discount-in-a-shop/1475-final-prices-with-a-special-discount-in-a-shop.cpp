class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> ans;
        int j;
        int n=prices.size();
        for(int i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(prices[j]<=prices[i]){
                    ans.push_back(prices[i]-prices[j]);
                    break;
                }
            }
            if(j==n){
                ans.push_back(prices[i]);
            }
        }
        return ans;
    }
};