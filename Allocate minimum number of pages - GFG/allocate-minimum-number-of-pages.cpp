// { Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    bool isvalid(int A[],int n,int k,int max)
    {
        int sum=0,student=1;
        for(int i=0;i<n;i++)
        {
            sum=sum+A[i];
            if(sum>max)
            {
                student++;
                sum=A[i];
            }
            if(student >k)
            return false;
            
            
        }
        return true;
    }
    int max(int A[],int n)
    {
        int max=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(A[i]>max)
            max=A[i];
        }
        return max;
    }
    int sum(int A[],int n)
    {
        int sum=0;
        for(int i=0;i<n;i++)
        sum=sum+A[i];
        return sum;
    }
    //Function to find minimum number of pages.
    // int findPages(int arr[], int n, int k) 
    int findPages(int A[], int N, int M)
    {
        
        int l=max(A,N); 
        int h=sum(A,N);
        int res=-1;
        while(l<=h)
        {
            int m=l+(h-l)/2;
            
            if(isvalid(A,N,M,m))
            {
                res=m;
                h=m-1;
            }
            else
            {
                l=m+1;
            }

        }
        return res;
    }
        
    //     if(n<k) return -1;
    //     int sum=0;
    //     for(int i=0;i<n;i++)
    //     {
    //         sum+=arr[i];
    //     }
    //     int lo= 0;
    //     int hi=sum;
    //     int res=-1;
    //     while(lo<=hi)
    //     {
    //         int mid= lo+(hi-lo)/2;
    //         if(isvalid(mid,arr,n,k)==true)
    //         {
    //             res=mid;
    //             hi=mid-1;
    //         }
    //         else
    //         {
    //             lo=mid+1;
    //         }
    //     }
        
    //     //code here
    // }
    //  bool isvalid(int maxPages,int *A,int N,int M)
    // {
    //     int count=1,books=0;
    //     for(int i=0;i<N;i++)
    //     {
    //         books+=A[i];
    //         if(books>maxPages)
    //         {
    //             books=A[i];
    //             count++;
    //             if(count>M)
    //             return false;
    //         }
            
        
    //     }
    //     return true;
    //     // (count <= M )? return true:return false;
    // }
    
    // static bool isvalid(int arr[],int n,int mid,int k)
    // {
    //     int stu=1;
    //     int sum=0;
    //     for(int i=0;i<n;i++)
    //     {
    //         sum+=arr[i];
    //         if(sum>mid)
    //         {
    //             stu++;
    //             sum=arr[i];
    //         }
    //     }
        
    //     if(stu>k)
    //     {
    //         return false;
    //     }
    //     return true;
    // }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}
  // } Driver Code Ends