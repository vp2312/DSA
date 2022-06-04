// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    bool isSafe(int row,int col,vector<string> board ,int n )
    {
        int duprow=row;
        int dupcol=col;
        
        while(row>=0 && col>=0)
        {
            if(board[row][col]=='Q')    return false;
            row--;
            col--;
        }
        
        row=duprow;
        col=dupcol;
        
        while(col>=0)
        {
            if(board[row][col]=='Q')    return false;
            col--;
        }
        
        row=duprow;
        col=dupcol;
        
        while(row<n && col>=0)
        {
            if(board[row][col]=='Q')    return false;
            row++;
            col--;
        }
        return true;
    }
    public:
    void solve(int col,vector<string> &board,  vector<vector<int>> &ans, int n)
    {
        if(col==n)
        {
            vector<int>  per;
            for(int row=0;row<n;row++)
            {
                for(int col=0;col<n;col++)
                {
                    if(board[col][row]=='Q')    per.push_back(col+1);
                }
            }
            
            ans.push_back(per);
            return;
        }
        
        for(int row=0;row<n;row++)
        {
            if(isSafe(row,col,board,n))
            {
                board[row][col]='Q';
                solve(col+1, board, ans, n);
                board[row][col]='.';
            }
        }
    }
    public:
    vector<vector<int>> nQueen(int n) {
        vector<vector<int>> ans;
        vector<string>  board(n);   //ERROR POINT n initialization
        string s(n,'.');
        
        for(int i=0;i<n;i++)
        {
            board[i]=s;
        }
        
        solve(0,board,ans,n);
        return ans;
        
    }
// public:
//     vector<vector<int>> nQueen(int n) {
//         // code here
//     }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends