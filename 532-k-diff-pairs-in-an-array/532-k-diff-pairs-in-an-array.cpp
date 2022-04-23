class Solution {
public:
    int findPairs(vector<int>& arr, int d) {
        int n= arr.size();
        sort(arr.begin(),arr.end());
        int flag=0;
        for(int i=0;i<n;i++)
        {
                int val= arr[i]+d;
                if(binary_search(arr.begin()+i+1,arr.end(),val))
                {
                    if(i>=1 && arr[i]!=arr[i-1])
                        flag++;
                    else if(i==0)
                        flag++;
                    else ;
                }
        }

        return flag;
        
    }
};