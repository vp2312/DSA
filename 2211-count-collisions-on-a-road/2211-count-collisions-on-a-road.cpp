class Solution {
public:
    int countCollisions(string dir) {
        int col=0;
        for(int i=0;i<dir.size()-1;i++)
        {
            if(dir[i]=='R' && dir[i+1]=='L')
            {
                col+=2;
                dir[i]='S';
                dir[i+1]='S';
            }
            if(dir[i]=='R' && dir[i+1]=='S')
            {
                col+=1;
                dir[i]='S';
                dir[i+1]='S';
                
            }
            if(dir[i]=='S' && dir[i+1]=='L')
            {
                col+=1;
                dir[i]='S';
                dir[i+1]='S';
            }
        }
        
        int srflg=0, slflg=0;
        for(int i=0;i<dir.size();i++)
        {
            if(dir[i]=='S')
            {
                slflg=1;
            }
            if(dir[i]=='L' && slflg==1)
            {
                dir[i]='S';
                col+=1;
            }
            
        }
        for(int i=dir.size()-1;i>=0;i--)
        {
            if(dir[i]=='S')
            {
                srflg=1;
            }
            if(dir[i]=='R' && srflg==1)
            {
                dir[i]='S';
                col+=1;
            }
        }
        
        return col;
    }
};