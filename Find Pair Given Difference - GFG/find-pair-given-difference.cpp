// { Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}// } Driver Code Ends


bool findPair(int arr[], int n, int d){
    //code
    
    sort(arr,arr+n);
    int flag=0;
    for(int i=0;i<n;i++)
    {
        // if(arr[i]>d)
        // {
        //     int v1= arr[i]-d;
        //     int v2= arr[i]+d;
        //     if(binary_search(arr,arr+n,v1))
        //     {
        //         return true;
        //     }
        //     if(binary_search(arr,arr+n,v2))
        //     {
        //         return true;
        //     }
            
        // }
        // else
        // {
            int val= arr[i]+d;
            if(binary_search(arr+i+1,arr+n,val))
            {
                return true;
            }
            
        
    }
    
    return false;
    
}