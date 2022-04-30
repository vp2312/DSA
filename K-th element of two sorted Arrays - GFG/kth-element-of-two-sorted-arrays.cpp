// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int kthElement(int nums1[], int nums2[], int n1, int n2, int k)
    {
        if(n1>n2) return kthElement( nums2, nums1,n2,n1,k);
        
        // int n1=nums1.size();
        // int n2=nums2.size();
        int l=max(0,k-n2),r=min(n1,k);
        if((n1+n2)%2==0)
        {
            while(l<=r)
            {
                int cut1= (l+r)/2;
                int cut2= k -cut1;

                int l1= cut1==0? INT_MIN:nums1[cut1-1];
                int l2= cut2==0? INT_MIN:nums2[cut2-1];

                int r1= cut1==n1? INT_MAX:nums1[cut1];
                int r2= cut2==n2? INT_MAX:nums2[cut2];

                if(l1<=r2 && l2<=r1)
                {
                    return (max(l1,l2)); 
                }
                else if(l1>r2)
                {
                    r=cut1-1;
                }
                else
                {
                    l=cut1+1;
                }
            }
        }
        else
        {
            while(l<=r)
            {
                int cut1= (l+r)/2;
                int cut2= k -cut1; // difference 1

                int l1= cut1==0? INT_MIN:nums1[cut1-1];
                int l2= cut2==0? INT_MIN:nums2[cut2-1];

                int r1= cut1==n1? INT_MAX:nums1[cut1];
                int r2= cut2==n2? INT_MAX:nums2[cut2];

                if(l1<=r2 && l2<=r1)
                {
                    return (max(l1,l2));    // difference 2
                }
                else if(l1>r2)
                {
                    r=cut1-1;
                }
                else
                {
                    l=cut1+1;
                }
            }
        }
        return 0;
        
        
    }
};

// { Driver Code Starts.
 
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}  // } Driver Code Ends