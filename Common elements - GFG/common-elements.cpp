// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            unordered_set<int> s;
            for(int i=0;i<n1;i++)
            {
                s.insert(A[i]);
                
            }
            
            vector <int> ans;
            unordered_set<int> chek;
            unordered_set<int> chek2;
            for(int i=0;i<n2;i++)
            {
                if(s.find(B[i])!=s.end())
                {
                    chek.insert(B[i]);
                }
            }
            
            for(int i=0;i<n3;i++)
            {
                if(chek.find(C[i])!=chek.end())
                {
                    chek2.insert(C[i]);
                }
            }
            
            for(auto j: chek2)
            {
                ans.push_back(j);
            }
            
            sort(ans.begin(),ans.end());
            if(ans.size()==0)  ans.push_back(-1);
            return ans;
            //code here.
        }

};

// { Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}  // } Driver Code Ends