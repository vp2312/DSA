class Solution {
public:
    int search(vector<int>& arr, int x) {
        int n= arr.size();
        int lo=0;
	    int hi= n-1;
	    int ind;
	    while(lo<=hi)
	    {
	        int mid= lo+ (hi-lo)/2 ;
	        if(arr[mid]==x)
	        {
	            return mid;
	        }
	        else
	        {
                if( arr[lo]<=arr[mid] )   // left sorted
                {
                    if(x>=arr[lo] && x<= arr[mid])   //in range
                    {
                        hi=mid-1;
                    }
                    else                             //not in range
                    {
                        lo=mid+1;
                    }
                    
                }
                else                    //right sorted
                {
                    if(x>=arr[mid] && x<= arr[hi])   //in range
                    {
                        lo=mid+1;
                        
                    }
                    else                             //not in range
                    {
                        hi=mid-1;
                    }
                    
                }
	        }
	    }
	    return -1;
        
    }
};