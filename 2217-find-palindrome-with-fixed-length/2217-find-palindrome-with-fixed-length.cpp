class Solution {
public:
    vector<long long> kthPalindrome(vector<int>& que, int len) {
        vector<long long> ans;
        // int maxx= max_element(que.begin(),que.end());
        if(len%2==0)
        {
            long long range= 9*pow(10, (len/2)-1);
            
            for(int i=0;i<que.size();i++)
            {
                if(que[i]>range)  ans.push_back(-1);
                else
                {
                    long long num=pow(10, (len/2)-1);
                    long long res= num+que[i]-1;
                    string a= to_string(res);
                    string b=a;
                    reverse(a.begin(),a.end());
                    b= b +a;
                    
                    long long val=stoll(b);
                    ans.push_back(val);
                }
            }
        }
        else
        {
            long long range= 9*pow(10, (len/2));
            
            for(int i=0;i<que.size();i++)
            {
                if(que[i]>range)  ans.push_back(-1);
                else
                {
                    long long num=pow(10, (len/2));
                    long long res= num+que[i]-1;
                    string a= to_string(res);
                    cout<<a<<endl;
                    string b=a;
                    reverse(a.begin(),a.end());
                    b= b + a.substr(1,a.size()-1);
                    // string a= to_string(res);
                    // a+= reverse(a.begin(),a.end()-1);
                    
                    long long val=stoll(b);
                    ans.push_back(val);
                }
            }
            
        }
        
        return ans;
    }
};