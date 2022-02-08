class Solution {
public:
    bool isHappy(int n) {
        if (n==1) return true;
        set<int> st;
        st.insert(n);
        int flag=0;
        while(n!=1)
        {
            string str=to_string(n);
            int x=0;
            for(auto j:str)
            {
                x+=pow(j-48,2);
            }
            n=x;
            if(st.find(n)!=st.end())
            {
                break;
            }
            else st.insert(n);
            if(n==1)
            {
                flag=1;
            }
        }
        
        if(flag==0)
        {
            return false;
        }
        else return true;
        return true;
        
    }
};