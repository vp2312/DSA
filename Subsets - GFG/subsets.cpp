// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<vector<int> > subsets(vector<int>& a)
    {
        vector<vector<int>> v;
        int ptr=0;
        vector<int> x;
        solve(a,x,ptr,v);
        sort(v.begin(),v.end());
        return v;
    }
private:
    void solve(vector<int>& ip, vector<int>& op, int cnt, vector<vector<int>>& ans)
    {
        if(cnt==ip.size())
        {
            ans.push_back(op);
            return ;
        }
        vector<int> m(op);
        vector<int> n(op);
        n.push_back(ip[cnt]);
        solve(ip,m,cnt+1,ans);
        solve(ip,n,cnt+1,ans);
        return;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}  // } Driver Code Ends