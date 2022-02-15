// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    vector<string> find_permutation(string S)
    {
       // Code here there
     vector<string> ans;
     string ip = S;
     string op = "";
     solve(ip,op,ans);
     sort(ans.begin(), ans.end());
     return ans;
    }
private:

   void solve(string ip, string op, vector<string>&ans){
        int n = ip.length();
        if(n == 0){
            ans.push_back(op);
            return;
        }
        for(int i = 0;i<n;i++){
            string op1 = op;
            string ip1 = ip;
            op1.push_back(ip[i]);
            ip1.erase(ip1.begin()+i);
            solve(ip1,op1,ans);
        }
        return;
        
    }
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends