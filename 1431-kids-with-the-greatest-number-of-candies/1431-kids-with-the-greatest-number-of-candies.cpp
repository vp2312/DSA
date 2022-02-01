class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& can, int ex) {
         vector<bool> v;
        int ma=*max_element(can.begin(),can.end());
        cout<<ma<<" ";
        int val=ma-ex;
        for(int i=0;i<can.size();i++)
        {
            cout<<can[i]<<" ";
            if(can[i]>=val) v.push_back(true);
            else v.push_back(false);
        }
        
        return v;
        
    }
};