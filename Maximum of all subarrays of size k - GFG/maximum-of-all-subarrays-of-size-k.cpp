// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *nums, int n, int k)
    {
        vector<int> output;
        int i=0;
        int j=0;
        list<int> l;
        while(j<n)
        {
            // if(l.empty()){ 
            //     l.push_back(nums[j]);   
            // }
            // else
            {
                while(!l.empty() && l.back()<nums[j])
                    l.pop_back();
                l.push_back(nums[j]);               
            }
            if(j-i+1<k)
                ++j;
            else if(j-i+1==k)
            {
                output.push_back(l.front());
                if(nums[i]==l.front())
                    l.pop_front();
                ++i;
                ++j;
            }
        }
        return output;
    }

    //     int i=0;
    //     int j=0;
    //     vector<int> v;
    //     queue<int> q;
    //     int maxx=INT_MIN;
    //     if(k>n)
    //     {
    //         v.push_back(*max_element(v.begin(),v.end()));
    //         return v;
    //     }
    //     while(j<n)
    //     {
    //         while(q.size()>0 && q.front()<arr[j])   q.pop();
    //         q.push(arr[j]);
    //         // maxx=max(maxx,arr[j]);
    //         if(j-i+1<k) j++;
    //         else
    //         {
    //             v.push_back(q.front());
    //             if(q.front()==arr[i])   q.pop();
                
    //             i++;
    //             j++;
    //         }
            
    //     }
    //     return v;
    //     // your code here
    // }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends