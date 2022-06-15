class Solution {
public:
    bool isAnagram(string pat, string txt) {
        if(pat.size()!=txt.size())    return false;
        int k= pat.size();
	    unordered_map<char,int> mp;
	    for(int i=0;i<k;i++)
	    {
	        mp[pat[i]]++;
	    }
	    int j=0;
	    int cnt=mp.size();
	    while(j<txt.size())
	    {
	        if(mp.find(txt[j])!=mp.end())
	        {
	            mp[txt[j]]--;
	            if(mp[txt[j]]==0)   cnt--;
	        }
            j++;
	    }
        if(cnt==0)  return true;
	    return false;
        
    }
};