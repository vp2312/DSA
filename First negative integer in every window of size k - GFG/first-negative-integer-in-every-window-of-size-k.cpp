// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k) {
                                                 
                                                 vector<long long> ans;
                                                 queue<long long> q;
                                                 int i=0;
                                                 int j=0;
                                                 
                                                 while(j<n)
                                                 {
                                                     if(arr[j]<0)   q.push(j);
                                                     if(j-i+1<k)    j++;
                                                     else
                                                     {
                                                         if(q.size()>0)
                                                         ans.push_back(arr[q.front()]);
                                                        else
                                                        ans.push_back(0);
                                                        
                                                         if(q.size()>0) if(q.front()==i)   q.pop();
                                                         i++;
                                                         j++;
                                                     }
                                                 }
                                                 return ans;
                                                 
                                                 
 }