class Solution {
public:
    string minimizeResult(string expr) {
        int pos;
        // int dp[]
        map<string, int> mp;
        for(int i=0;i<expr.size();i++)
        {
            if(expr[i]=='+')
            {
                pos=i;
            }
        }
        int sp= pos-1;
        int ep= pos+1;
        solve(expr,sp,ep,pos,mp);
        int k=1;
        int val=INT_MAX;
        string sns="";
        for(auto j: mp)
        {
            if(val> j.second)
            {
                sns=j.first;
                val=j.second;
            }
            // cout<<j.first<<" "<<j.second<<endl;
        }
        return sns;
    }
    
    
    static void solve( string expr,int sp, int ep,int pos,map<string, int>& mp)
    {
        if(sp==-1 || ep==expr.size())
        {
            return ;
        }
        
        ostringstream a;
        for(int j=0;j< sp;j++)
        {
            a<<expr[j];
        }
        string str1(a.str());
        int p1;
        if(str1.size()!=0) p1= stoi(str1);
        else p1=1;

        ostringstream b;
        for(int j=ep+1;j< expr.size();j++)
        {
            b<<expr[j];
        }
        string str2(b.str());
        int p2;
        if(str2.size()!=0) p2= stoi(str2);
        else p2=1;
        
        ostringstream c;
        for(int j=sp;j< pos;j++)
        {
            c<<expr[j];
        }
        string str3(c.str());
        int s1= stoi(str3);

        ostringstream d;
        for(int j=pos+1;j<= ep;j++)
        {
            d<<expr[j];
        }
        string str4(d.str());
        int s2= stoi(str4);

        int val= p1*p2*(s1+s2);
         
        string str="";
        for(int i=0;i<expr.size();i++)
        {
            if(sp == i)
            {
                str+= '(';
                str+= expr[i];
            }
            else if( ep == i)
            {
                str+= expr[i];
                str+= ')';
            }
            else
            {
                str+= expr[i];
            }
            
        }
        // cout<<str<<" "<<p1<<" "<<(s1+s2)<<" "<<p2<<" "<<val<<endl;
        mp.insert({str,val});
        
        solve(expr,sp-1,ep,pos,mp);
        solve(expr,sp,ep+1,pos,mp);
        solve(expr,sp-1,ep+1,pos,mp);
    }
    
};