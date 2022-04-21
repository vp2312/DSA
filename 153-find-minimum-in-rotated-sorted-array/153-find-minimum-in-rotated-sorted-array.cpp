class Solution {
public:
    int findMin(vector<int>& arr) {
        int n= arr.size();
        int lo=0;
	    int hi= n-1;
	    int ind;
	    while(lo<=hi)
	    {
            if(arr[lo]<=arr[hi])
            {
                return arr[lo];
            }
            
            
	        int mid= lo+ (hi-lo)/2 ;
	        int prev= (mid+n-1)%n;
	        int nxt= (mid+1)%n;
	        if(arr[mid]<=arr[prev] && arr[mid]<=arr[nxt])
	        {
	            return arr[mid];
	        
	        }
	        else if( arr[lo]<=arr[mid])
	        {
                lo=mid+1;
	            
	        }
	        else /*if(arr[mid]<= arr[hi])*/
	        {
	            hi=mid-1;
	        }
	    }
	    // cout<<ind<<endl;
	    return 1;
        
    }
};