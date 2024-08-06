Solution 1-:
Steps-:


Code-:
int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int ans=0;
        int i=1;
        int buy=0;
        int sell=0;

        while(i<n)
        {
            if(prices[i]>prices[i-1])
            {
               buy=prices[i-1];
               i++;

               while(i<n and prices[i]>prices[i-1])
               {
                   i++;
               }
               sell=prices[i-1];
               ans+=sell-buy;
            }
           
            i++;
        }
        return ans;
      
}