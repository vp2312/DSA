class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int flag=0;
        for(auto j:arr)
        {
            if(j==0 && flag==0)
            {
                flag=1;
                continue;
            }
//             if(j<0)
//             {
//                 j=j*-1;
//                 if(j%2==0)
//             {
                    
//                 if(find(arr.begin(),arr.end(),-j)!=arr.end() && (find(arr.begin(),arr.end(),-j/2)!=arr.end() || find(arr.begin(),arr.end(),-j*2)!=arr.end()))
//                 {
//                     // cout<<*j;
//                     return true;
//                 }
//             }
//             else
//             {
//                 if(find(arr.begin(),arr.end(),-j)!=arr.end() && (find(arr.begin(),arr.end(),-j*2)!=arr.end()))
//                 {
//                     // /cout<<*j;
//                     return true;
//                 }
                
//             }
//             }
//             else
//             {
            if(j%2==0)
            {
                if(find(arr.begin(),arr.end(),j)!=arr.end() && (find(arr.begin(),arr.end(),j/2)!=arr.end() || find(arr.begin(),arr.end(),j*2)!=arr.end()))
                {
                    // cout<<*j;
                    return true;
                }
            }
            else
            {
                if(find(arr.begin(),arr.end(),j)!=arr.end() && (find(arr.begin(),arr.end(),j*2)!=arr.end()))
                {
                    // cout<<*j;
                    return true;
                }
                
            }
                
            }
            
        
       
        return false;
    }
};