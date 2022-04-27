/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &arr) {
        int n= arr.length();
        if(n==1) return 0;
        int hi= n-1;
        int lo=0;
        int pkind=-1;
        int cnt=0;
        while (lo < hi) 
        {
           int  m = (lo + hi) / 2;
            if (arr.get(m) < arr.get(m + 1))
                lo = pkind = m + 1;
            else
                hi = m;
        }
//         while(lo<=hi)
//         {
//             int mid= lo+ (hi-lo)/2;
//             if(mid>0 && mid<(n-1) )
//             {
//                 if(arr.get(mid)>arr.get(mid-1) && arr.get(mid)>arr.get(mid+1))
//                 {
//                     // cnt+=4;
//                     pkind= mid;
//                     break;
//                 }
//                 else if(arr.get(mid)<arr.get(mid-1))
//                 {
//                     // cnt++;
//                     // cnt++;
//                     hi=mid-1;
                    
//                 }
//                 else if(arr.get(mid)<arr.get(mid+1))
//                 {
//                     // cnt++;
//                     // cnt++;
//                     lo= mid+1;
//                 }
//                 // else if(arr[mid]< arr[mid+1] || arr[mid]< arr[mid-1])
//                 // {
//                 //     hi=mid-1;
//                 // }
//                 else ;
//             }
//             else if( mid==0)
//             {
//                 if(arr.get(mid)>arr.get(mid+1))
//                 {
//                     // cnt++;
//                     // cnt++;
//                      pkind= mid;
//                      break;
//                 }
//                 else
//                 {pkind= 1; break;}
//             }
//             else if( mid==(n-1))
//             {
//                 if(arr.get(mid)>arr.get(mid-1))
//                 {
//                     // cnt++;
//                     // cnt++;
//                      pkind= mid;
//                     break;
//                 }
//                 else { pkind= mid-1; break;}
//             }
//             else ;
//             cnt+=12;
//         }
        
         hi= pkind;
         lo=0;
        while(lo<=hi)
        {
            int mid= lo+ (hi-lo)/2;
            if(arr.get(mid)==target)
            {
                cnt++;
                // cnt++;
                return mid;
            }
            else if(arr.get(mid)>target)
            {
                cnt++;
                hi=mid-1;
            }
            else
            {
                
                lo=mid+1;
            }
            cnt+=2;
        }
        lo= pkind+1;
         hi=n-1;
        while(lo<=hi)
        {
            int mid= lo+ (hi-lo)/2;
            if(arr.get(mid)==target)
            {
                cnt++;
                return mid;
            }
            else if(arr.get(mid)>target)
            {
                cnt++;
                lo=mid+1;
                
            }
            else
            {
                hi=mid-1;
            }
             cnt+=2;
        }
        
        cout<<cnt<<endl;
        
        return -1;
        
    }
};