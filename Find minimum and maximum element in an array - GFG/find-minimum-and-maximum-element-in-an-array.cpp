// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}// } Driver Code Ends


pair<long long, long long> getMinMax(long long a[], int n) {
    pair<long long, long long> ans;
    if(n%2==0)
    {
        if(a[0]>a[1])
        {
            ans.second=a[0];
            ans.first=a[1];
        }
        else
        {
            ans.second=a[1];
            ans.first=a[0];
        }
        
        for(int i=2;i<n;i=i+2)
        {
            if(a[i+1]>a[i])
            {
                if(a[i+1]>ans.second)
                {
                    ans.second=a[i+1];
                }
                if(a[i]<ans.first)
                {
                    ans.first=a[i];
                }
            }
            else
            {
                if(a[i]>ans.second)
                {
                    ans.second=a[i];
                }
                if(a[i+1]<ans.first)
                {
                    ans.first=a[i+1];
                }
            }
        }
    }
    else
    {
        ans.second=a[0];
        ans.first=a[0];
        
        for(int i=1;i<n;i=i+2)
        {
            if(a[i+1]>a[i])
            {
                if(a[i+1]>ans.second)
                {
                    ans.second=a[i+1];
                }
                if(a[i]<ans.first)
                {
                    ans.first=a[i];
                }
            }
            else
            {
                if(a[i]>ans.second)
                {
                    ans.second=a[i];
                }
                if(a[i+1]<ans.first)
                {
                    ans.first=a[i+1];
                }
            }
        }
    }
    
    return ans;
    
}