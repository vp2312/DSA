class Solution {
public:
    long long maximumSubsequenceCount(string text, string pat) {
        if(pat[0]==pat[1])
        {
             int n= text.length();
            vector<long long int> fir;
            text+=pat[0];
            long long int ans=0;
            long long int firc=0,secc=0;
            for(long long int i= n-1; i>=0;i--)
            {
                if(text[i]==pat[1])
                {
                    secc++;
                    fir.push_back(secc);
                }
                else fir.push_back(secc) ;
            }
            reverse(fir.begin(),fir.end());
            for(long long int i= 0; i<n;i++)
            {
                if(text[i]==pat[0])
                {
                    ans+=fir[i];
                    // cout<<fir[i]<<"  ";
                    // cout<<fir[i]<<"  "<<i<<"..";
                    // firc++;
                    // sec.push_back(firc);
                }
            // else sec.push_back(firc) ;
            }
            // if(a>=b)
            // {
            //     ans+=a;
            // }
            // else
            // {
            //     ans+= b;
            // }
            return ans;
    }
        
        long long int a= count(text.begin(),text.end(),pat[1]);
        long long int b= count(text.begin(),text.end(),pat[0]);
        
        
        
//         if(pat[0]==pat[1])
//         {
             int n= text.length();
            vector<long long int> fir;
            text+=pat[0];
            long long int ans=0;
            long long int firc=0,secc=0;
            for(long long int i= n-1; i>=0;i--)
            {
                if(text[i]==pat[1])
                {
                    secc++;
                    fir.push_back(secc);
                }
                else fir.push_back(secc) ;
            }
            reverse(fir.begin(),fir.end());
            for(long long int i= 0; i<n;i++)
            {
                if(text[i]==pat[0])
                {
                    ans+=fir[i];
                    // cout<<fir[i]<<"  ";
                    // cout<<fir[i]<<"  "<<i<<"..";
                    // firc++;
                    // sec.push_back(firc);
                }
            // else sec.push_back(firc) ;
            }
            if(a>=b)
            {
                ans+=a;
            }
            else
            {
                ans+= b;
            }
            return ans;
            
        // }
        // long long int n= text.length();
        // vector<long long int> fir;
        // vector<long long int> sec;
        // long long int ans=0;
        // long long int firc=0,secc=0;
        // for(long long int i= n-1; i>=0;i--)
        // {
        //     if(text[i]==pat[1])
        //     {
        //         secc++;
        //         fir.push_back(secc);
        //     }
        //     else fir.push_back(secc) ;
        // }
        // reverse(fir.begin(),fir.end());
        // for(long long int i= 0; i<n;i++)
        // {
        //     if(text[i]==pat[0])
        //     {
        //         firc++;
        //         sec.push_back(firc);
        //     }
        //     else sec.push_back(firc) ;
        // }
        // // reverse(sec.begin(),sec.end());
        // for(auto j: fir)
        // {
        //     cout<<j<<" ";
        // }
        // cout<<endl;
        // for(auto j: sec)
        // {
        //     cout<<j<<" ";
        // }
        // for(long long int i= 0; i<n;i++)
        // {
        //     if(text[i]==pat[0])
        //     {
        //         ans+=fir[i];
        //         cout<<fir[i]<<"  ";
        //         // cout<<fir[i]<<"  "<<i<<"..";
        //         // firc++;
        //         // sec.push_back(firc);
        //     }
        //     // else sec.push_back(firc) ;
        // }
        // // int a=*max_element(fir.begin(),fir.end());
        // // int b=*max_element(sec.begin(),sec.end());
        // long long int a=fir[0];
        // long long int b=sec[n-1];
        // ans+=max(a,b);
        // cout<<ans;
        // cout<<endl;
        // return ans;
        
    }
};