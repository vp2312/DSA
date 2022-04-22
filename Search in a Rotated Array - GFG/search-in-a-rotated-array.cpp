// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    int search(int arr[], int l, int h, int x){
        // int n= arr.size();
        int lo=l;
	    int hi= h;
	    int ind;
	    while(lo<=hi)
	    {
	        int mid= lo+ (hi-lo)/2 ;
	        if(arr[mid]==x)
	        {
	            return mid;
	        }
	        else
	        {
                if( arr[lo]<=arr[mid] )   // left sorted
                {
                    if(x>=arr[lo] && x<= arr[mid])   //in range
                    {
                        hi=mid-1;
                    }
                    else                             //not in range
                    {
                        lo=mid+1;
                    }
                    
                }
                else                    //right sorted
                {
                    if(x>=arr[mid] && x<= arr[hi])   //in range
                    {
                        lo=mid+1;
                        
                    }
                    else                             //not in range
                    {
                        hi=mid-1;
                    }
                    
                }
	        }
	    }
	    return -1;
    //complete the function here
    }
};

// { Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}  // } Driver Code Ends