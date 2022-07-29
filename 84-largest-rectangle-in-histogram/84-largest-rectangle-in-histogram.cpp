class Solution {
public:
    int largestRectangleArea(vector<int>& price) {
    //     int getMaxArea(int price[], int n)
    // {
        int n= price.size();
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
          ans= max(ans, (v1[i]-v[i]-1)*price[i]);
      }
      return ans;
    
    }
};