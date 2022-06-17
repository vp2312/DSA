class Solution {
public:
    string minWindow(string s, string t) {
        
        
    unordered_map<char,int> mp;
    for(int i=0 ; i<t.length() ;i++)
     mp[t[i]]++;
    string ans="";
    int i=0,j=0;
    int currlen=INT_MAX;
    int count=mp.size();
    while(j<s.length())
    {
       if(mp.find(s[j])!=mp.end())
       {
           mp[s[j]]--;
           if(mp[s[j]]==0)
           count--;
       }

       if(count>0)
       j++;
       else if(count==0)
       {
            if(j-i+1 < currlen)
            {
                ans=s.substr(i,j-i+1);
                currlen=ans.size();
            }
           // ans=min(ans,j-i+1);    
           while(count==0)
           {
               if(mp.find(s[i])==mp.end())
               {
                   i++;
                   if(j-i+1 < currlen)
                    {
                        ans=s.substr(i,j-i+1);
                        currlen=ans.size();
                    }
                   // ans=min(ans,j-i+1);  
               }
               else
               {
                   mp[s[i]]++;
                   if(mp[s[i]]>0)
                   {
                       i++;
                       count++;
                   }
                   else
                   {
                       i++;
                       if(j-i+1 < currlen)
                        {
                            ans=s.substr(i,j-i+1);
                            currlen=ans.size();
                        }
                       // ans=min(ans,j-i+1); 
                   }
               }
           }
           j++;
       }
    }
    // cout<<ans<<endl;
    return ans;
        
    }
};