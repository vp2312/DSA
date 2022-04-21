// { Driver Code Starts


#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    
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
            return 0;
            v.push_back(-1);
            v.push_back(-1);
        }
        // return v;
    return v[1]-v[0]+1;
	    // code here
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends