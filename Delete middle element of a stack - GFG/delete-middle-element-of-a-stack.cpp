// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sos)
    {
        int ind= ceil(sos/2.0);
        // cout<<sos<<"...";
        if (sos%2!=0) solve(s,ind);
        else solve(s,ind+1);
        return ;
    }
    public:
    void solve(stack<int>& st, int i)
    {
        if(i==1)
        {
            st.pop();
            return ;
        }
        // cout<<i<<".."<<endl;
        int temp=st.top();
        st.pop();
        solve(st,i-1);
        st.push(temp);
        return ;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}
  // } Driver Code Ends