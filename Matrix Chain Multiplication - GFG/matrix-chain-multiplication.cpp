// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int dp[102][102];
    int matrixMultiplication(int N, int arr[])
    {
        memset(dp,-1, sizeof(dp));
        int i=1; int j=N-1;
        int ans=solve(arr,i,j);
        return ans;
    }
public:
    int solve(int arr[],int i,int j)
    {
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        if(i>=j)
        {
            return dp[i][j]=0;
        }
        int mn=INT_MAX;
        for(int k=i;k<j;k++)
        {
            int temp=solve(arr,i,k) + solve(arr,k+1,j)+ arr[i-1]*arr[k]*arr[j];
            mn=min(temp,mn);
            dp[i][j]=mn;
        }
        return mn;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.matrixMultiplication(N, arr)<<endl;
    }
    return 0;
}  // } Driver Code Ends