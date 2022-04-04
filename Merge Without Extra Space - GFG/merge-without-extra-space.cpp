// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    int gap=ceil(n+m/2.0);
	    while(gap>=1)
	    {
	        int right = gap;
    	    int left=0;
    	   // cout<<"1"<<" ";
    	    while(!(right>=m+n))
    	    {
    	        if(right<n && left<n)
    	        {
    	            if(arr1[left]>arr1[right])
    	            {
    	                swap(arr1[left],arr1[right]);
    	            }
    	        }
    	        else if(right>=n && left<n)
    	        {
    	            if(arr1[left]>arr2[right-n])
    	            {
    	                swap(arr1[left],arr2[right-n]);
    	            }
    	           // cout<<"1"<<" ";
    	        }
    	        else
    	        {
    	            if(arr2[left-n]>arr2[right-n])
    	            {
    	                swap(arr2[left-n],arr2[right-n]);
    	            }
    	        }
    	        
    	        left++;
    	        right++;
    	    }
    	    if(gap==1) break;
    	    gap=ceil(gap/2.0);
	    }
	    
	    
	   // for(int i=0;i<n;i++)
	   // {
	   //     if(arr1[i]>arr2[0])
	   //     {
	   //         swap(arr1[i],arr2[0]);
	   //         int x=0;
	   //         while((x+1 < m) && (arr2[x]>arr2[x+1]))
	   //         {
	   //             swap(arr2[x],arr2[x+1]);
	   //             x++;
	   //         }
	            
	            
	   //        // if(arr2[0]>arr2[1])
	   //     }
	   // }
	    
	    return ;
	    // code here
	}
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends