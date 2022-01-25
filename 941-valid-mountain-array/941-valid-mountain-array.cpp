class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3) return false;
        if(arr[1]<arr[0]) return false;
        int mid=-1;
        int flag=0;
        for(int i=1;i<arr.size()-1;i++)
        {
            
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
            {
                if(flag==1) return false;
                mid=arr[i];
                flag=1;
            }
            if(arr[i]==arr[i-1])  return false;
            if(mid!=-1 && arr[i+1]>arr[i]) return false;
            
            // if(arr[])
                
        }
        if(mid==-1) return false;
        return true;
        
    }
};