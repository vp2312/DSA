// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


 // } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    vector<string> AllParenthesis(int n) 
    {
        int j=n;
        int m=n;
        vector<string> v;
        string s="";
        solve(j,m,s,v);
        return v;
    }
    public:
    void solve(int o,int c,string op,vector<string> &ans)
    {
        if(o==0 && c==0)
        {
            ans.push_back(op);
            return ;
        }
        if(o!=0)
        {
            string op1=op;
            op1.push_back('(');
            solve(o-1,c,op1,ans);
        }
        if( o<c)
        {
            // string op1=op;
            // op1.push_back('(');
            // solve(o-1,c,op1,ans);
            string op2=op;
            op2.push_back(')');
            solve(o,c-1,op2,ans);
        }
        return ;
    }
};

// { Driver Code Starts.


int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 
  // } Driver Code Ends