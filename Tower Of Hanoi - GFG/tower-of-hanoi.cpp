// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    long long toh(int N, int from, int to, int aux) {
        long long int cnt=0;
        solve(N,from,to,aux,cnt);
        // cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
        return cnt;
    }
    void solve(int N, int from, int to, int aux, long long int &t)
    {
        t++;
        if(N==1)
        {
            cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
            return ;
        }
        solve( N-1,  from,  aux,  to,t);
        cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
        solve(N-1, aux,  to, from,t);
        return ;
    }

};

// { Driver Code Starts.

int main() {

    int T;
    cin >> T;//testcases
    while (T--) {
        
        int N;
        cin >> N;//taking input N
        
        //calling toh() function
        Solution ob;
        
        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}


//Position this line where user code will be pasted.  // } Driver Code Ends