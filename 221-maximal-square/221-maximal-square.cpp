class Solution {
public:
//     int maxArea(int arr[MAX][MAX], int n, int m) {
        
//     }
    
    int getMaxArea(int price[], int n)
    {
        stack<pair<int, int>> s;
        stack<pair<int, int>> s1;
      vector <int> v, v1, v3;
      for(int i=0;i<n;i++)
      {
          if(s.size()==0)
          {
              v.push_back(-1);
          }
          else if(s.size()!=0 && s.top().first < price[i])
          {
              v.push_back(s.top().second);
          }
          else if(s.size()!=0 && s.top().first >= price[i])
          {
              while(s.size()!=0 && s.top().first >= price[i])
              {
                  s.pop();
              }
              if(s.size()==0)  v.push_back(-1);
              else v.push_back(s.top().second);
               
          }
          s.push({price[i], i});
      }
       
       
      for(int i=n-1;i>=0;i--)
      {
          if(s1.size()==0)
          {
              v1.push_back(n);
          }
          else if(s1.size()!=0 && s1.top().first < price[i])
          {
              v1.push_back(s1.top().second);
          }
          else if(s1.size()!=0 && s1.top().first >= price[i])
          {
              while(s1.size()!=0 && s1.top().first >= price[i])
              {
                  s1.pop();
              }
              if(s1.size()==0)  v1.push_back(n);
              else v1.push_back(s1.top().second);
               
          }
          s1.push({price[i], i});
      }
      reverse(v1.begin(), v1.end());
       
      int ans= INT_MIN;
      for(int i=0;i<n;i++)
      {
          if((v1[i]-v[i]-1)>= price[i])
          ans= max(ans, price[i]*price[i]);
      }
      return ans;
    }
    
    
    int maximalSquare(vector<vector<char>>& mat) {
        
        int n= mat.size();
        int m= mat[0].size();
        int arr[n][m];
         for(int i=0;i<n;i++)
         {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]=='0' )
                    arr[i][j]=0;
                else
                    arr[i][j]=1;
            }
         }
        
        // for(int i=0;i<n;i++)
        //  {
        //     for(int j=0;j<m;j++)
        //     {
        //         cout<<arr[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
                    
        int ans=0;
        int v1[m];
        if(n>0)
        {
            for(int j=0;j<m;j++)
            {
                v1[j]=arr[0][j];
            }
            int x= getMaxArea(v1, m);
            ans= max(ans, x);
        }
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(arr[i][j]!=0)
                {
                    v1[j]+=1;
                }
                else
                  v1[j]=0;
            }
            int x= getMaxArea(v1, m);
            ans= max(ans, x);
        }
        return ans;
    }
};