// { Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    public:
    int dp[502][502];
    int palindromicPartition(string str)
    {
        int N=str.length();
        memset(dp,-1, sizeof(dp));
        int i=0; int j=N-1;
        int ans=solve(str,i,j);
        return ans;
    }
public:
    bool isPalindrome(string str,int i,int j)
    {
        if(i>=j) return true;
        while(i<j)
        {
            if(str[i]==str[j])
            {
                i++;
                j--;
            }
            else return false;
        }
        return true;
    }
public:
    int solve(string str,int i,int j)
    {
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        if(isPalindrome(str,i,j))
        {
            return dp[i][j]=0;
        }
        int mn=INT_MAX;
        for(int k=i;k<j;k++)
        {
            int l,r;
            if(dp[i][k]!=-1)
            {
                  l= dp[i][k];
            }
            else  l=solve(str,i,k);
            if(dp[k+1][j]!=-1)
            {
                  r= dp[k+1][j];
            }
            else  r= solve(str,k+1,j);
            int temp=l+r+ 1;
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
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}  // } Driver Code Ends