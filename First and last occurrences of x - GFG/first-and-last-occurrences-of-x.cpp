// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
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
    v.push_back(res);
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
    v.push_back(res);
    return v;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


  // } Driver Code Ends