class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        
        int n= arr.size();
        if(n==1) return 0;
        int hi= n-1;
        int lo=0;
        while(lo<=hi)
        {
            int mid= lo+ (hi-lo)/2;
            if(mid>0 && mid<(n-1) )
            {
                if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
                {
                    return mid;
                }
                else if(arr[mid]< arr[mid-1])
                {
                    hi=mid-1;
                    
                }
                else if(arr[mid]< arr[mid+1])
                {
                    lo= mid+1;
                }
                // else if(arr[mid]< arr[mid+1] || arr[mid]< arr[mid-1])
                // {
                //     hi=mid-1;
                // }
                else ;
            }
            else if( mid==0)
            {
                if(arr[mid]>arr[mid+1])
                {
                    return mid;
                }
                else return 1;
            }
            else if( mid==(n-1))
            {
                if(arr[mid]>arr[mid-1])
                {
                    return mid;
                }
                else return mid-1;
            }
            else ;
            
            
        }
        return 1;
        
    }
};