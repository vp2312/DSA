class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int flag=0;
        
        for(int i=0;i<words.size();i++)
        {
            if(words[i].length()==1) return words[i];
            for(int j=0;j<words[i].length()/2;j++)
            {
                // stack<char> st;
                if(words[i][j]!=words[i][words[i].length()-j-1])
                {
                    flag=1;
                    cout<<words[i];
                    break;
                }
                else if (j+1==words[i].length()/2)
                {
                    return words[i];
                }
                else 
                    ;
                
                
            }
                
            if(flag==0)
                return words[i];
            
            
        }
        return "";
        
    }
};