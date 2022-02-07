
    bool how(string a,string b)
{
int i = a.find(' '), j = b.find(' ');
string s1 = a.substr(i);
string s2 = b.substr(j);

    if(s1 < s2)
        return true;
    
    if(s2 < s1)
        return false;
    
    if(a<b)
        return true;
    
    return false;
}
class Solution {
    
public:
    vector<string> reorderLogFiles(vector<string>& logs) {
        vector<string> dig;
    vector<string> let;
    int n = logs.size();
    for(int i=0;i<n;i++)
    {
        string b = logs[i];
        int j=0;
        while(b[j] != ' ')
            j++;
        j++;

        bool sd = false;
        if(b[j]>='0' && b[j]<='9')
            sd = true;
        // cout<<b[j]<<endl;
        if(sd==true)
           dig.push_back(b);
        else
            let.push_back(b);
    }
    
    sort(let.begin(), let.end(),how);
    for(string x:dig)
        let.push_back(x);
    return let;
}
    
        
};