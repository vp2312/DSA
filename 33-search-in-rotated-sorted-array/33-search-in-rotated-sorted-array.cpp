class Solution {
public:
    int search(vector<int>& arr, int x) {
        int n= arr.size();
        int lo=0;
	    int hi= n-1;
	    int ind;
	    while(lo<=hi)
	    {
            // if(arr[lo]<=arr[hi])
            // {
            //     return arr[lo];
            // }
            
            
	        int mid= lo+ (hi-lo)/2 ;
	        // int prev= (mid+n-1)%n;
	        // int nxt= (mid+1)%n;
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
	        // else /*if(arr[mid]<= arr[hi])*/
	        // {
	        //     lo=mid+1;
	        // }
	    }
	    // cout<<ind<<endl;
	    return -1;
        
    }
};