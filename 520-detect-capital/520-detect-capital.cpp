class Solution {
public:
    bool detectCapitalUse(string w) {
        if(islower(w[0]))
        {
            for(int i=1;i<w.length();i++)
            {
                if(!islower(w[i]))
                {
                    return false;
                }
            }
        }
        else
        {
            if(islower(w[1]))
            {
                for(int i=2;i<w.length();i++)
                {
                    if(!islower(w[i]))
                    {
                        return false;
                    }
                }   
                
            }
            else if(!islower(w[1]))
            {
                for(int i=2;i<w.length();i++)
                {
                    if(islower(w[i]))
                    {
                        return false;
                    }
                }   
                
            }
            
        }
        return true;
    }
};