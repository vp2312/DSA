class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int x) {
        int n= arr.size();
        vector<int> v;
        int lo=0;
        int hi= n-1;

        int res=-1;
        while(lo<=hi)
        {
            int mid= lo + (hi-lo /2);
            if ( arr[mid]>x)  hi=mid-1;
            else if(arr[mid]<x) lo=mid+1;
            else
            {
                res=mid;
                hi=mid-1;
            }
        }
        if(res!= -1) v.push_back(res);
        lo=0;
        hi= n-1;
        res=-1;

        while(lo<=hi)
        {
            int mid= lo + (hi-lo /2);
            if ( arr[mid]>x)  hi=mid-1;
            else if(arr[mid]<x) lo=mid+1;
            else
            {
                res=mid;
                lo=mid+1;
            }
        }
        if(res!= -1) v.push_back(res);
        
        if(v.empty())  
        {
            v.push_back(-1);
            v.push_back(-1);
        }
        return v;
        
    }
};