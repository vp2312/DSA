// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

  public:
	int minDifference(int arr[], int n)  { 
	   // int n=nums.size();
	   vector<int> nums;
	   for(int i=0;i<n;i++)
	   {
	       nums.push_back(arr[i]);
	   }
        int sum=0;
        for(auto j:nums)
        {
            sum+=j;
        }
        // if(sum%2!=0) return false;
        // bool t[n+1][sum/2+1];
        float mid=sum/2.0;
        int ans= solve(nums,n, sum/2);
        // cout<<mid<<"vvvv"<<(mid-ans)*2;
         return (mid-ans)*2;  
        
    }
private :
    int solve(vector<int>& arr,int n, int sum)
    {
        bool t[n+1][sum+1];
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<sum+1;j++)
            {
                if(i==0) t[i][j]=false;
                if(j==0) t[i][j]=true;
                
            }
            
        }
        
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<sum+1;j++)
            {
                if(arr[i-1]<=j)
                {
                    t[i][j]= t[i-1][j-arr[i-1]] || t[i-1][j];
                }
                else
                {
                    t[i][j]=t[i-1][j];
                }
            }
        }
        // for(int i=0;i<n+1;i++)
        // {
        //     for(int j=0;j<sum+1;j++)
        //     {
        //         cout<<t[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
    
        for(int i=sum;i>=0;i--)
        {
            if(t[n][i]==true)
            {
                // cout<<i;
                return i;
                
            }
            // else return 0;
        }
         return 0;
        // return t[n][sum];
	    // Your code goes here
	} 
};


// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends