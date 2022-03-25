class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int a=0;
        int b=0;
        int ans=0;
        vector<int> numsa;
        vector<int> numsb;
        for(auto j: costs)
        {
            if(j[0]>j[1])
            {
                numsb.push_back(abs(j[0]-j[1]));
                ans+=j[1];
                b++;
            }
            else if(j[0]<j[1])
            {
                numsa.push_back(abs(j[0]-j[1]));
                ans+=j[0];
                a++;
            }
            else
            {
                ans+=j[0];
            }
        }
        
        if(a+b<costs.size())
        {
            if(a>b)
            {
                b+=costs.size()-(a+b);
            }
            else if(b>a)
            {
                a+=costs.size()-(a+b);
            }
            else
            {
                a+=(costs.size()-(a+b))/2;
                b+=(costs.size()-(a+b))/2;
            }
        }
        cout<< a<<"  "<<b<<endl;
        
        // for(auto j: costs)
        // {
        //     ans+=min(j[0],j[1]);
        // }
        
        if(a==b)
        {
            return ans;
        }
        else
        {
            if(a>b)
            {
                
                priority_queue<int,vector<int>,greater<int>> pq(numsa.begin(),numsa.end());
                int val=abs(b-a)/2;
                while(val--)
                {

                    ans+=pq.top();
                    pq.pop();

                }
            }
            else
            {
                
                priority_queue<int,vector<int>,greater<int>> pq(numsb.begin(),numsb.end());
                int val=abs(b-a)/2;
                while(val--)
                {

                    ans+=pq.top();
                    pq.pop();

                }
            }
                // vector<int> nums;
            //     for(auto j: costs)
            //     {
            //         nums.push_back(abs(j[0]-j[1]));
            //     }
            // for(auto j: nums)
            //     {
            //         cout<<j<<" ";
            //     }
            // cout<<endl;
                
            return ans;
        }
        
        return 1;
        
        
        
        
        
//         int a=0;
//         int b=0;
//         for(auto j: costs)
//         {
//             if(j[0]>j[1])
//             {
//                 b++;
//             }
//             else if(j[0]<j[1])
//             {
//                 a++;
//             }
//         }
        
//         if(a+b<costs.size())
//         {
//             if(a>b)
//             {
//                 b+=costs.size()-(a+b);
//             }
//             else if(b>a)
//             {
//                 a+=costs.size()-(a+b);
//             }
//             else
//             {
//                 a+=(costs.size()-(a+b))/2;
//                 b+=(costs.size()-(a+b))/2;
//             }
//         }
//         cout<< a<<"  "<<b<<endl;
//         int ans=0;
//         for(auto j: costs)
//         {
//             ans+=min(j[0],j[1]);
//         }
        
//         if(a==b)
//         {
//             return ans;
//         }
//         else
//         {
//                 vector<int> nums;
//                 for(auto j: costs)
//                 {
//                     nums.push_back(abs(j[0]-j[1]));
//                 }
//             for(auto j: nums)
//                 {
//                     cout<<j<<" ";
//                 }
//             cout<<endl;
//                 priority_queue<int,vector<int>,greater<int>> pq(nums.begin(),nums.end());
//             int val=abs(b-a)/2;
//             while(val--)
//             {
                
//                 ans+=pq.top();
//                 pq.pop();
                
//             }
//             return ans;
//         }
        
//         return 1;
    }
};