// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find all possible unique subsets.
    vector<vector<int> > AllSubsets(vector<int> nums, int n)
    {
        vector<vector<int>> subs;  //op vector
        vector<int> sub;  //temp vector
        int cnt=0;
        set<vector<int>> mp;
        subsets(nums,cnt ,sub, subs,mp);  
        for(auto e: mp)
        {
            subs.push_back(e);
        }
        sort(subs.begin(), subs.end());
        
        
        return subs;
        // int cnt=0;
        // vector<int> op;
        // op.clear();
        
        // mp.clear();
        // vector<vector<int>> v;
        // solve(arr,op,mp,cnt);
        // for(auto e: mp)
        // {
        //     v.push_back(e);
        // }
        // sort(v.begin(), v.end());
        // return v;
        
    }
    public:
    
    void subsets(vector<int>& nums,int cnt, vector<int>& sub,
    vector<vector<int>>& subs, set<vector<int>>& mp) {
        
        if(cnt==nums.size())
        {
            sort(sub.begin(),sub.end());
            mp.insert(sub);
            // subs.push_back(sub);
            return;
        }
        vector<int> temp1(sub);
        vector<int> temp2(sub);
        temp2.push_back(nums[cnt]);
        subsets(nums,cnt+1, temp1, subs,mp);
        subsets(nums,cnt+1, temp2, subs,mp);
        return;
    }
    //Function to find all possible unique subsets.
    // void solve(vector<int> ip,vector<int> op,set<vector<int>>& mp, int cnt)
    // {
    //     if(ip.size()==cnt)
    //     {
    //         sort(op.begin(),op.end());
    //         mp.insert(op);
    //         return;
    //     }
    //     vector<int> op1=op;
    //     vector<int> op2=op;
    //     op2.push_back(ip[cnt]);
    //     // ip.erase(ip.begin()+0);
    //     solve(ip,op1,mp,cnt+1);
    //     solve(ip,op2,mp,cnt+1);
    //     return;
    
    // }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            A.push_back(x);
        }
        Solution obj;
        vector<vector<int> > result = obj.AllSubsets(A,n);
        // printing the output
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}   


  // } Driver Code Ends