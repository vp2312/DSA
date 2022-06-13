// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    long long int maximumSumSubarray(int k, vector<int> &Arr , int n){
        int i=0;
        long long int sum=0;
        long long int ans=INT_MIN;
        while(i<k)
        {
            sum+=Arr[i];
            i++;
        }
        ans=sum;
        int j=0;
        while(i<n)
        {
            sum=sum-Arr[j]+Arr[i];
            ans=max(ans, sum);
            j++;
            i++;
        }
        return ans;
        // code here 
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
}   // } Driver Code Ends