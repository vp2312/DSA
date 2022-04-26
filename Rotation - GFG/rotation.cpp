// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    if(arr[0]<arr[n-1]) return 0;
	    int lo=0;
	    int hi= n-1;
	    int ind;
	    while(lo<=hi)
	    {
	        int mid= (lo+hi)/2 ;
	        int prev= (mid+n-1)%n;
	        int nxt= (mid+1)%n;
	        if(arr[mid]<=arr[prev] && arr[mid]<=arr[nxt])
	        {
	            return mid;
	        }
	         if(arr[lo]<=arr[mid] && arr[mid]<=arr[hi])
            {
                return lo;
            }
	        else if( arr[lo]<=arr[mid])
	        {
	            lo=mid+1;
	        }
	        else
	        {
	            hi=mid-1;
	       
	        }
	    }
	    
	    return ind;
	    // code here
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends