class Solution {
public:
    string countAndSay(int n) {
        
        if(n==1) return "1";
        if(n==2) return "11";
        string prev=countAndSay(n-1);
        cout<<prev<<" "<<n<<endl;
        string res= "";
        char ch=prev[0];
        int cnt=1;
        for(int i=1;i<=prev.size();i++)
        {
            if(ch==prev[i])
            {
                cnt++;
            }
            else
            {
                res+= to_string(cnt);
                res+= ch;
                ch=prev[i];
                cnt=1;
            }
        }
        cout<<res<<" "<<n<<endl<<endl;
        return res;
        
        
        
        
        
        
//         map<char,int> mp;
//         for(auto j: prev)
//         {
//             mp[j]++;
//         }
        
        
//         for(auto j: mp)
//         {
//             res+= to_string(j.second);
//             res+= j.first;
//         }
//         cout<<res<<" "<<n<<endl<<endl;
//         return res;
    }
};