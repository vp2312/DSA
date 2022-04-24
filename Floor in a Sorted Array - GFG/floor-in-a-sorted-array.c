// { Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <stdlib.h>


 // } Driver Code Ends
//User function Template for C

// Function to find floor of K
// arr[]: integer array of size N
// N: size of arr[]
// K: element whose floor is to find
int findFloor(long long int nums[], int n, long long int target) {
    if(target<nums[0])
    {
        return -1;
    }
    
    int low= 0, high= n-1;
        int ans;
        //  cout<<low<<" "<<high<<endl;
        while(low<=high)
        {
            int ind=low+ (high-low)/2;
            if(nums[ind]==target)
            {
                return ind;
            }
            else if(nums[ind]>target)
            {
                // ans=ind-1;
                high=ind-1;
            }
            else if(nums[ind]<target)
            {
                ans=ind;
                low=ind+1;
                
            }
            else    ;
        }
        
        return ans;
    //Your code here
}

// { Driver Code Starts.

int main() {
	
	long long int t;
	scanf("%lld", &t);
	
	while(t--){
	    int n;
	    scanf("%d", &n);
	    long long int x;
	    scanf("%lld", &x);
	    
	    long long int *arr;
		arr = (long long int *)malloc(n * sizeof(long long int));
	    
	    for(int i = 0;i<n;i++){
	        scanf("%lld", &arr[i]);
	    }
	    printf("%d\n", findFloor(arr, n, x) );
	   
	}
	
	return 0;
}

  // } Driver Code Ends