class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s= to_string(num);
        int j=0;
        int i=0;
        string val="";
        int ans=0;
        
        
        
        while(j<s.size())
        {
            string x(1,s[j]);
            val=val+x;
            if(j-i+1<k) j++;
            else
            {
                cout<<stoi(val)<<" ";
                if(stoi(val)!=0 && num%stoi(val)==0)    ans++;
                val=val.substr(1,val.size()-1);
                i++;
                j++;
                
            }
        }
        return ans;
        
    }
};