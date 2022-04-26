// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        // Code here
        // int n= arr.size();
        vector<int> v;
        int lo=0;
        int hi= n-1;

        int res=-1;
        while(lo<=hi)
        {
            int mid= lo + (hi-lo /2);
            if ( arr[mid]>x)  hi=mid-1;
            else if(arr[mid]<x) lo=mid+1;
            else
            {
                res=mid;
                hi=mid-1;
            }
        }
        if(res!= -1) v.push_back(res);
        lo=0;
        hi= n-1;
        res=-1;

        while(lo<=hi)
        {
            int mid= lo + (hi-lo /2);
            if ( arr[mid]>x)  hi=mid-1;
            else if(arr[mid]<x) lo=mid+1;
            else
            {
                res=mid;
                lo=mid+1;
            }
        }
        if(res!= -1) v.push_back(res);
        
        if(v.empty())  
        {
            v.push_back(-1);
            // v.push_back(-1);
        }
        return v;
        
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}
  // } Driver Code Ends