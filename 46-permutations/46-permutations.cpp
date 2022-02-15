class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
     vector<vector<int>> ans;
     vector<int> op ;
     solve(nums,op,ans);
     sort(ans.begin(), ans.end());
     return ans;
    }
private:

   void solve(vector<int> ip, vector<int> op, vector<vector<int>>& ans){
        int n = ip.size();
        if(n == 0){
            ans.push_back(op);
            return;
        }
        for(int i = 0;i<n;i++){
            vector<int> op1(op);
            vector<int> ip1(ip);
            op1.push_back(ip[i]);
            ip1.erase(ip1.begin()+i);
            solve(ip1,op1,ans);
        }
        return;
    }
};