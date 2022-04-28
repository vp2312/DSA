class Solution {
public:
     bool isvalid(int A[],int n,int k,int max)
    {
        int sum=0,student=1;
        for(int i=0;i<n;i++)
        {
            sum=sum+A[i];
            if(sum>max)
            {
                student++;
                sum=A[i];
            }
            if(student >k)
            return false;
            
            
        }
        return true;
    }
    int max(int A[],int n)
    {
        int max=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(A[i]>max)
            max=A[i];
        }
        return max;
    }
    int sum(int A[],int n)
    {
        int sum=0;
        for(int i=0;i<n;i++)
        sum=sum+A[i];
        return sum;
    }
    //Function to find minimum number of pages.
    // int findPages(int arr[], int n, int k) 
    int findPages(int A[], int N, int M)
    {
        
        int l=max(A,N); 
        int h=sum(A,N);
        int res=-1;
        while(l<=h)
        {
            int m=l+(h-l)/2;
            
            if(isvalid(A,N,M,m))
            {
                res=m;
                h=m-1;
            }
            else
            {
                l=m+1;
            }

        }
        return res;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int A[60000];
        int i=0;
        for(auto j:weights)
        {
            A[i]=j;
            i++;
        }
        int ans=findPages(A,weights.size(),days);
        return ans;
    }
};