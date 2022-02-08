class Solution {
public:
    int addDigits(int num) {
        string str=to_string(num);
        int l=to_string(num).size();
        cout<<str<<" "<<str[0]-48<<l;
        
        while(to_string(num).size()!=1)
        {
            int x=0;
            str=to_string(num);
            for(auto j: str)
            {
                x=x+j-48;
            }
            num=x;
        }
        return num;
        
    }
};