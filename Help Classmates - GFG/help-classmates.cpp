// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
//User function Template for C++

class Solution{
    
    public:
    vector<int> help_classmate(vector<int> arr, int n) 
    { 
        vector<int>v;
        stack<int>s;
        
        for(int i= n-1;i>=0;i--)
        {
            if(s.size() == 0) v.push_back(-1);
            else if(s.size() > 0 && s.top() < arr[i] )
                    v.push_back(s.top());
            else if(s.size()>0 && s.top() >= arr[i]){
                
                while(s.size()>0 && s.top() >= arr[i])
                      s.pop();
                
                if(s.size() == 0) v.push_back(-1);
                else v.push_back(s.top());
            }
            s.push(arr[i]);
        }
        reverse(v.begin(),v.end());
        return v;
        
        // vector<int> ans;
        // stack<int> s;
        // s.push(arr[n-1]);
        // ans.push_back(-1);
        // int i=n-2;
        //     while(i>=0)       //!s.empty() || arr[i]<s.top()
        //     {
        //         if(arr[i]>s.top())
        //         {
        //             ans.push_back(s.top());
        //             s.push(arr[i]);
        //             i--;
                    
        //         }
        //         else if(arr[i]<s.top())
        //         {
        //             s.pop();
        //         }
                
        //         if(s.empty())
        //         {
        //             ans.push_back(-1);
        //             s.push(arr[i]);
        //             i--;
        //         }
        //     }
        //   reverse(ans.begin(),ans.end());
        //   return ans;
        
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
		vector<int> array(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>array[i];
		}
		Solution obj;
		vector<int> result = obj.help_classmate(array,n);
		for (int i = 0; i < n; ++i)
		{
			cout<<result[i]<<" ";
		}
		cout<<"\n";
	}
	return 0; 
}

  // } Driver Code Ends