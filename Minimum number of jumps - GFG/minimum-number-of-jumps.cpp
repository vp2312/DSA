// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int nums[], int n){
        if(n<=1) return 0;
        if(nums[0] == 0 )
            return -1;
        
        // if(n<=1) return -1;
        int ladder=nums[0];
        int stair=nums[0];
        int jmp=1;
        
        for(int level=1;level<n;level++)
        {
            if(level==n-1) return jmp;
            if(level+ nums[level] > ladder)  
            {
                ladder=level+ nums[level];
            }
            stair--;
            if(stair==0)
            {
                jmp++;
                if(level>=ladder) return -1; 
                stair=ladder-level;
            }
        }
        
        return jmp;
        
        // if(nums[0] == 0)
        //     return -1;
        // // Your code here
         
        // int mxre=0;
        // int currmx=0;
        // int jmp=0;
        // for(int i=0; i<n-1;i++)
        // {
        //     // currmx=nums[i];
            
        //     if(nums[i]+i>mxre) mxre=nums[i]+i;
        //     if(i>mxre) return -1;
        //     if(currmx==i) 
        //     {
        //         jmp++;
        //         currmx=mxre;
        //     }
        // }
        
        // return jmp;
        
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends