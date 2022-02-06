class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int lsf = INT_MAX;
        int op = 0;
        int pist = 0;
        
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < lsf){
                lsf = prices[i];
            }
            pist = prices[i] - lsf;
            if(op < pist){
                op = pist;
            }
        }
        return op;
//         int pr=0;
//         int pb=INT_MAX;
//         cout<<pb<<" ";
//         int ps=prices[prices.size()-1];
//         cout<<ps<<" ";
//         int x=0;
//         int y=prices.size()-1;
//         for(int i=0;i<prices.size() && x<y;i++)
//         {
//             if(prices[i]<pb)
//             {
//                 pb=prices[i];
//                 // x=i;
//             }
//             if(prices[prices.size()-1-i]>ps)
//             {
//                 ps=prices[prices.size()-1-i];
//                 // y=prices.size()-1-i;
//             }
//             x=i;
//             y=prices.size()-1-i;
//             pr=max(prices[i]-pb,pr);
//             cout<<pr<<i<<prices.size()-1-i<<" ";
//         }
//         if(pr<0)
//             return 0;
        
//         return pr;
        
    }
};