// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}

// } Driver Code Ends


//User function Template for C++

string reverseWord(string str){
    // reverse(str.begin(),str.end());
    
    for(int i=0;i<str.length()/2;i++)
    {
        char temp= str[i];
        str[i]=str[str.length()-1-i];
        str[str.length()-1-i]=temp;
    }
    return str;
  //Your code here
}