class Solution {
public:
    static bool fcompare(pair<int,int>  p, pair<int,int>  p1)
    {
        if (p.second != p1.second)
            return (p.second > p1.second);
        else
            return (p.first < p1.first);
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
         vector<int> ans;
        unordered_map<int,int> mp;
        for(auto j: nums)
        {
            mp[j]++;
        }
        
        for(auto j: mp)
        {
            cout<<j.first<<" "<<j.second<<endl;
        }
        
       
        
        vector<pair<int, int> >  b;
        
        for ( auto it = mp.begin(); it != mp.end(); ++it)
            b.push_back(make_pair(it->first, it->second));

        sort(b.begin(), b.end(), fcompare);
        for(int i=0;i<k;i++)
        {
            ans.push_back(b[i].first);
        }
        
//         priority_queue<int> pq(b.begin(),b.end());
        
        
//         while(k--)
//         {
//             ans.push_back(pq.top());
//             pq.pop();
//         }
        
        return ans;
    }
};