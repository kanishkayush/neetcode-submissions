class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int currprice=0;
        int ans=0;

        for(int i=0;i<prices.size();i++){
            int buy=prices[i];

            for(int j=i+1;j<prices.size();j++){
                if(j>i){
                    currprice=prices[j]-prices[i];
                    ans=max(ans,currprice);
                }else{
                    return 0;
                }
            }
            
        }
        return ans;
    }
};
